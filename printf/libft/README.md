*This project has been created as part of the 42 curriculum by jmin.*

# **Description** 
	libft 라이브러리 파일을 만듭니다. 다양한 함수들과 stdlib.h, unistd.h, 구조체의 형태를 하나의 헤더파일로 불러올 수 있습니다. 판별, 출력, 복사, 삭제, 적용, 변환 등의 기능과 문자, 포인터, 리스트 등을 다룹니다.
# **Instructions**
	 ft_*.c, libft.h, Makefile 로 이루어져 있습니다. 아카이브 생성을 위해, 'make'시동어로 소스코드(.c)를 컴파일하여 오브젝트 파일(.o)을 만들고 라이브러리(.a)를 생성합니다. 'make clean'으로 컴파일하고 오브젝트 파일을 삭제합니다. 'make fclean'으로 컴파일하고 오브젝트 파일과 라이브러리 파일을 삭제합니다. 'make re'로 fclean을 실행한 후 다시 make를 실행하여 재컴파일 합니다.
# **Resources**
	GNU MAKE MANUAL: Makefile의 모든 규칙과 특수변수에 대한 표준 문서입니다.
	Linux man-pages: 원본 함수들의 정확한 동작과 예외사항을 규명한 자료입니다.
	How AI was used: 1. 알고리즘 검증 및 최적화 2. 메모리 안정성 및 예외 처리 3. 이중 포인터 등의 사용방법에 대한 조언

# **Functions**
	ft_atoi.c: char를 int로
	ft_bzero.c: 모든 자리를 0으로
	ft_calloc.c: malloc한 뒤 각 자리에 0으로
	ft_isalnum.c: 알파벳, 숫자인지 판별
	ft_isalpha.c: 알파벳 판별
	ft_isascii.c: 아스키코드인지 판별
	ft_isdigit.c: 십진수인지 판별
	ft_isprint.c: 출력가능한지 판별
	ft_itoa.c: 정수를 캐릭터로
	ft_lstadd_back.c: 리스트에 노드를 뒤에 추가
	ft_lstadd_front.c: 리스트에 노드를 앞에 추가
	ft_lstclear.c: 리스트내 노드의 내용물 콜백함수로 삭제하고 노드삭제
	ft_lstdelone.c: 콜백함수로 노드의 내용물 삭제후 노드삭제
	ft_lstiter.c: 리스트내 노드의 내용물에 각각 콜백함수적용
	ft_lstlast.c: 리스트의 마지막노드 호출
	ft_lstmap.c: 리스트내 노드의 내용물에 각각 콜백함수 적용한 결과값을 새로 메모리할당하여 만들어 반환
	ft_lstnew.c: 매개변수를 내용물로하는 새로운 노드 생성
	ft_lstsize.c: 리스트내에 노드의 갯수반환
	ft_memchr.c: 문자열에서 n개만큼의 캐릭터를 찾아 가장먼저 찾은 캐릭터의 주소를 반환
	ft_memcmp.c: 두 문자열에서 n개만큼의 캐릭터를 찾아 비교하다가 다른것을 발견하면 차이를 반환
	ft_memcpy.c: 목적지 문자열에 소스 문자열의 n개만큼을 복사
	ft_memmove.c: 목적지 문자열에 소스 문자열의 n개만큼을 복사하되 메모리주소로 인한 덮어쓰기 문제 방지
	ft_memset.c: 문자열의 n개만큼을 특정 캐릭터로 바꿈
	ft_putchar_fd.c: 캐릭터를 파일디스크립터에 따라 넣음
	ft_putendl_fd.c: 문자열과 줄바꿈을 파일디스크립터에 따라 넣음
	ft_putnbr_fd.c: 정수를 파일디스크립터에 따라 넣음
	ft_split.c: 문자열을 구분자에 따라 나누어 각각 새문자열로 할당하고 할당된 문자열들의 포인터를 반환
	ft_strchr.c: 문자열에서 특정 캐릭터를 찾아 그 위치를 반환
	ft_strdup.c: 문자열을 새로 할당하여 복사
	ft_striteri.c: 문자열에 각각 콜백함수 적용
	ft_strjoin.c: 문자열을 연결하여 새로 할당하고 반환
	ft_strlcat.c: size길이의 새 문자열을 만들어 dst의 뒤에 src를 이어붙임 복사가 안되면 src+size반환 복사가 하나라도 되면 src+dest 반환
	ft_strlcpy.c: dst문자열을 null terminated된 size길이 문자열로 바꾸고 가능한만큼 src복사
	ft_strlen.c: 문자열의 길이 측정
	ft_strmapi.c: 새 메모리를 할당하여 문자열 각자리에 콜백함수를 적용한 값을 반환
	ft_strncmp.c: 두 문자열을 n개까지 값을 비교하다가 처음 차이가 발생한 두 문자의 차이값을 반환
	ft_strnstr.c: 문자열 내에 작은 문자열을 찾아 큰 문자열 내의 작은 문자열 시작점을 반환
	ft_strrchr.c: 문자열 내의 특정 문자를 뒤에서부터 찾아 가장 먼저 발견한 주소를 반환
	ft_strtrim.c: 문자열의 앞과 뒤를 삭제하여 반환 삭제규칙은 set에 포함되어있는 문자가 아닐 때 까지
	ft_substr.c: 문자열에서 start부터 len만큼의 새 문자열을 만듦
	ft_tolower.c: 영어 대문자 캐릭터를 소문자로 바꿈
	ft_toupper.c: 영어 소문자 캐릭터를 대문자로 바꿈