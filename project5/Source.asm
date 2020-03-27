.386
.model flat, stdcall
option casemap :none
include ../dependencies/include/masm32.inc
include ../dependencies/include/kernel32.inc
includelib masm32.lib
includelib kernel32.lib

.data
	temp db 10
	msg1 db 10, 13, "Input string: ", 10, 13, 0
	msg2 db 10, 13, "How many times should word be repeated? ", 10, 13, 0
	msg_true db 10, 13, "TRUE", 10, 13, 0
	msg_false db 10, 13, "FALSE", 10, 13, 0

	move_to_next_word db 1
	infinite_loop db 1
	garbage dd ?

	input_string db 128 dup(?)

	input_string_len dd ?
	remaining_string_len dd ?

	word_buffer db 128 dup(?)

	repeat_num db 10 dup(?)

	current_word_ptr dd ?


; PROTOTYPES-----------------------------------------------------
find_space proto inp:ptr byte, len:dword
str_len proto inp:ptr byte, delimiter:byte
str_to_int proto inp:ptr byte
str_cmp proto str1:ptr byte, str2:ptr byte, delimiter:byte
delete_word proto word_start:dword, word_end:dword, word_len:dword
; ---------------------------------------------------------------

.code
main proc
invoke	StdOut,	offset msg1
invoke	StdIn,	offset input_string, lengthof input_string
invoke	StdOut, offset msg2
invoke	StdIn,	offset repeat_num, lengthof repeat_num

invoke	str_to_int, offset repeat_num

		mov esi, offset input_string

		.while infinite_loop == 1

		pushad
invoke	str_len, offset input_string, 0
		mov input_string_len, ecx
		popad

invoke	str_len, esi, 0
		mov		remaining_string_len, ecx

invoke	find_space, esi, remaining_string_len
		mov	current_word_ptr, esi

		.if ecx == 0
			jmp terminate
		.endif

		; end of the current word
		push edi

		push esi
		push edi

		; counter of duplicates
		xor	edx, edx
		mov dl, 0

		mov edi, offset input_string
		dec edi
		mov ecx, input_string_len

	.while ecx > 0
		inc edi
invoke	find_space, edi, ecx
		
invoke	str_cmp, current_word_ptr, esi, " "

		.if ebx == 1
		inc dl

		push esi ; word's start
		push edi ; word's end

		pushad
	invoke	StdOut,	offset msg_true
		popad

		.elseif	ebx == 0
		pushad
	invoke	StdOut,	offset msg_false
		popad
		.endif
	.endw

	.if dl == repeat_num
		mov move_to_next_word, 0
		.while dl > 1
			pop edi
			pop esi
			inc edi
		invoke str_len,	edi, 0
			dec edi

	invoke	delete_word, esi, edi, ecx
			dec	dl
		.endw

		; delete first word
		pop edi
		pop esi

		inc edi
	invoke str_len,	edi, 0
		dec edi

	invoke delete_word, esi, edi, ecx

	.else
		.while dl > 0
		pop edi
		pop esi
		dec dl
		.endw
	.endif

		pushad
	invoke	StdOut,	offset input_string
		popad

		.if move_to_next_word == 1
			; get ptr to the next word
			pop esi
			inc esi
		.else
			mov move_to_next_word, 1
			pop garbage
		.endif
		.endw

	terminate:

invoke ExitProcess, 0
main endp


; FUNCTIONS------------------------------------------------------
; esi - string start
; edi - string end
; ebx - word length
; ecx - length of the remaining string
find_space proc inp:ptr byte, len:dword
		mov		edi, inp
		mov		esi, inp
		mov		ecx, len
		mov		al, " "
		cld
repne	scasb
		dec		edi
		mov		ebx, edi
		sub		ebx, esi
		ret
find_space endp

;ecx - length of a string
str_len proc inp:ptr byte, delimiter:byte
		push edi
		push eax

		mov		edi, inp
		sub		ecx, ecx
		not		ecx	; ECX = -1, or 4,294,967,295
		mov		al, delimiter
		cld		
repne	scasb
		not		ecx
		dec		ecx

		pop eax
		pop edi
		ret
str_len endp

; convert string to int
str_to_int proc inp:ptr byte
		pushad 

		mov		ecx, 0
		mov		esi, inp
		cmp		byte ptr [esi + ecx], 0
		sub		byte ptr [esi + ecx], 48d
		inc		ecx

		popad
		ret
str_to_int endp

; if equal then		ebx = 1
; if not equal then ebx = 0
str_cmp proc str1:ptr byte, str2:ptr byte, delimiter:byte
.data
	str1_len dd ?
	str2_len dd ?

.code
		push eax
		push ecx
		push edi
		push esi

		mov		esi, str1
		mov		edi, str2
invoke	str_len, str1, delimiter ; ecx = length of str1
		mov		str1_len, ecx
invoke	str_len, str2, delimiter
		mov		str2_len, ecx

		cmp str1_len, ecx
		jne notequal

repe	cmpsb
		je	equal
	notequal:
		mov ebx, 0
		pop esi
		pop edi
		pop ecx
		pop eax
		ret
	equal:
		pop esi
		pop edi
		pop ecx
		pop eax
		mov ebx, 1
		ret
str_cmp endp

delete_word proc word_start:dword, word_end:dword, word_len:dword
			pushad
			mov esi, word_end
			inc esi
			mov edi, word_start
			mov ecx, word_len
			inc ecx
		rep	movsb
			popad
			ret
delete_word endp
; ---------------------------------------------------------------

end main
