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
