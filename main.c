#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memccpy.c"
#include "ft_memmove.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_strlen.c"
#include "ft_strdup.c"
#include "ft_strlcpy.c"
#include "ft_strtrim.c"
#include "ft_itoa.c"
/*
#include "ft_strlcat.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"*/
#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main()
{
	// MEMSET
	unsigned char res[15] = "12345678";
	ft_memset(res, 'e', 4);
	printf("memset: %s\n", res);

	// BREZO
	unsigned char c[15] = "1234567890";
	ft_bzero(c, 3);
	printf("bzero: %s\n", c);

	// MEMCPY
	unsigned char e[134] = "12345";
	unsigned char w[15] = "qwertyufdggsi";
	memcpy(e,w,3);
	printf("memcpy: %s\n", e);

	// MEMCCPY
	unsigned char ew[22];
	unsigned char we[] = "test basic du memccpy !";
	unsigned char qa[22];
	unsigned char aq[22] = "test basic du memccpy !";
	printf("test %s\n",ft_memccpy(ew, we, 'm', 0));
	printf("ft_memccpy: %s\n", ew);
	memccpy(qa, aq, 'm', 0);
	printf("memccpy: %s\n", qa);


	// MEMMOVE
	unsigned char ewe[15] = "12345678";
	unsigned char wew[15] = "12345678";
	ft_memmove(ewe, ewe + 2, 5);
	printf("ft_memmove: %s\n", ewe);
	memmove(wew, wew + 2, 5);
	printf("memmove: %s\n", wew);

	// MEMCHR
	unsigned char chr[15] = "12345678";
	unsigned char chrs[15] = "12345678";
	char *test = ft_memchr (chr, '5', 6);
	printf("ft_memchr: %s\n", test);
	char *orig = memchr(chrs, '5', 6);
	printf("memchr: %s\n", orig);

	// MEMCMP
	unsigned char cmp1[14] = "\xff\xaa\xde\x12";
	unsigned char cmp2[14] = "\xff\xaa\xde\x12MACOSAAAAA";
	printf ("ft_memcp: %d\n memcmp: %d\n", ft_memcmp(cmp1, cmp2, 4), memcmp(cmp1, cmp2, 4));

	// STRLEN
	char a[10] = "1234567";
	printf("ft_strlen: %d\n", ft_strlen(a));
	printf("strlen: %d\n", strlen(a));

	// STRLCPY
	char ab[20];
	char abc[20] = "\x42 \x42 \x42 \x42 \x0  \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41";
	char abe[20];
	char abce[20] = "\x42 \x42 \x42 \x42 \x0  \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41 \x41";
	printf("strlcpy: %d\n сама строка %s\n", strlcpy(ab,abc,19) , ab);
	printf("ft_strlcpy: %zu\n сама строка %s\n", ft_strlcpy(abe,abce,19) , abe);


	const char *as = "12345 fd";
	printf("Это уже ft_strdup = %s\n strdup = %s\n", ft_strdup(as), strdup(as));

	printf("\n ft_itoa = %s", ft_itoa(0));
}
