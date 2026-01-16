*This project has been created as part of the 42 curriculum by jmin.*

# **Description**
	libftprintf.a 라이브러리 파일을 만듭니다. libft.a의 다양한 함수들과 ft_printf 함수를 하나의 헤더파일로 불러올 수 있습니다. printf관련 자료들은 루트 최상단에 있습니다.
# **Instructions**
	 Makefile, *.h, */*.h, *.c, */*.c 로 이루어져 있습니다. 아카이브 생성을 위해, 'make'시동어로 소스코드(.c)를 컴파일하여 오브젝트 파일(.o)을 만들고 라이브러리(.a)를 생성합니다. 'make clean'으로 컴파일하고 오브젝트 파일을 삭제합니다. 'make fclean'으로 컴파일하고 오브젝트 파일과 라이브러리 파일을 삭제합니다. 'make re'로 fclean을 실행한 후 다시 make를 실행하여 재컴파일 합니다.
# **Resources**
	GNU MAKE MANUAL: Makefile의 모든 규칙과 특수변수에 대한 표준 문서입니다.
	Linux printf-page: printf 함수의 정확한 동작과 예외사항을 규명한 자료입니다.
	ISO/IEC 9899: C언어의 정수 승격에 대한 기준을 제공합니다.
	How AI was used: 알고리즘 검증 및 최적화
# **Functions**
	ft_character.c: %c 명령에 문자 출력 및 리턴값 구현
	ft_decimal.c: %d 명령에 십진수 출력 및 리턴값 구현
	ft_hexadecimal.c: %x 명령에 16진수 출력 및 리턴값 구현
	ft_integer.c: %i 명령에 정수 출력 및 리턴값 구현
	ft_pointer.c: %p 명령에 포인터 16진수로 출력 및 리턴값 구현
	ft_printf.c: printf 함수 재현
	ft_string.c: %s 명령에 문자열 출력 및 리턴값 구현
	ft_unsigned.c: %u 명령에 부호없는 정수 출력 및 리턴값 구현
	ft_uphexadecimal.c: %X 명령에 대문자 16진수 출력 및 리턴값 구현
	Makefile: make 등 명령어 도움