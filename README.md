2025.12.23 15:45
First update "1"
added is isalpha ~ atoi
working with calloc.
Malloc Calloc is used because memory should allocated when compiling.


2025.12.25 11:00
"2" updated.
added calloc
working with strdup

strlcat reviewd, this function is cat after dest, return is src+dest length or src+size(3rd factor)
return src+size when nothing is catted. If anything catted, then src+dest is return.
In function, only return (dest length + src length) exist. But I made size = length when size is lesser
with while((len_d < size) && (dst[len_d] != '\0'))

Calloc is malloc with members and size of member. And then put every member as zero.

2025.12.29 11:44
"3" updated.
added strdup, substr, strjoin, strtrim, split
working with itoa

in split, 		
while (*s == c)
			s++;
This can replace s[i] works. Because adding one to pointer equals next factor in array.
i = -1;
		while(++i < len)
			word[i] = s[i];
This can replace to shorter.
i = 0;
while(i < len)
{
word[i] = s[i];
i++;
}

2025.12.30 14:17
"4" updated.
added itoa ~ lstnew
woriking with lstadd_front.
in struct, '.' means contact to something.
'->' means '(*).' which is contact to pointer.
-> will use by malloc and heap teritory. it will use to list of struct.

2026.01.02 16:08
"5" updated.
added lstadd_front ~ lstclear
woriking with lstiter.
void ft_lstiter(t_list *lst, void (*f)(void *)) 
void(*f)(void*) ex) ft_lstiter(lst, function) take function to use.
no need to &function cause function is first so it can use it as address.
