#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

/*

	int i;
	int nb;
	i = -500;
	while (i != 501)
	{
	printf("%d ", i);
	nb = ft_isalnum(i);
	printf("%d ", nb);
	nb = isalnum(i);
	printf("%d\n", nb);
	i++;
	}



	char *a = "\f\v\t\n\r   +92233720368547758099999";
	char *b = "-9223372036854779";
	char *c = "-922337203685477580999999";
	char *d = "-9223372036854775800";
	char *e = "92233720360";
	int nb;
	nb = atoi(a);
	printf("/%d/", nb);
	nb = ft_atoi(a);
	printf("%d\n", nb);
	nb = atoi(b);
	printf("/%d/", nb);
	nb = ft_atoi(b);
	printf("%d\n", nb);
	nb = atoi(c);
	printf("/%d/", nb);
	nb = ft_atoi(c);
	printf("%d\n", nb);
	nb = atoi(d);
	printf("/%d/", nb);
	nb = ft_atoi(d);
	printf("%d\n", nb);
	nb = atoi(e);
	printf("/%d/", nb);
	nb = ft_atoi(e);
	printf("%d\n", nb);



	char *s1 = "hahahahahaha1";
	char *s2 = "hahahasdfsad";
	int i = 0;
	i = strcmp(s1, s2, 7);
	printf("%d\n", i);
	i = strcmp(s2, s1, 7);
	printf("%d\n", i);
	i = ft_strcmp(s1, s2, 7);
	printf("%d\n", i);
	i = ft_strcmp(s2, s1, 7);
	printf("%d", i);



	const char *haystack = "how ou dyoung";
	const char *needle = "ng";
	printf("%s\n", ft_strnstr(haystack, needle, 12));
	printf("%s", strnstr(haystack, needle, 12));



	printf("%s\n", strrchr("hello", 108));
	printf("%s", strrchr("hello", 108));



	printf("%zu\n%zu", ft_strlen("hello"), strlen("hello"));



	size_t i = 0;
	while (i < 15) {
	printf("%zu\n", i);
	char a[130] = "--";
	char b[7] = "ABCD";
	printf("%lu ", ft_strlcat(a, b, i));
	puts(a);
	char a1[30] = "--";
	char b1[7] = "ABCD";
	printf("%lu ", strlcat(a1, b1, i));
	puts(a1);
	write(1, "\n", 1);
	i++; }


	
	char dst[7] = "abcdef";
	ft_strcpy(dst, "1234");
	write(1, &dst, 8);
	write(1, "\n", 1);
	char dst1[7] = "abcdef";
	strcpy(dst1, "1234");
	write(1, &dst1, 8);



	puts(ft_strdup("abcdef123456"));



	char b[8] = "aaaaaaa";
	char *a = b;
	a = ft_memset(a, 32, 7);
	write(1, b, 7);
	write(1, "\n", 1);
	char b1[8] = "aaaaaaa";
	char *a1 = b1;
	a1 = memset(a1, 32, 7);
	write(1, b1, 7);



	char a[10] = "abcd";
	char b[] = "efgh";
	char *c = ft_memmove (a, b, 4);
	puts(b);
	puts(c);
	char a1[10] = "abcd";
	char b1[] = "efgh";
	char *c1 = memmove (a1, b1, 4);
	puts(b1);
	puts(c1);



	int i = 4;
	char s[20] = "abcdefghij";
	int	c = 101;
	puts(ft_memchr(s, c, i));
	puts(memchr(s, c, i));



	size_t x = 5;
	char *a = "helle";
	char *b = "hello";
	int i = ft_memcmp(a, b, x);
	printf("%d\n", i);
	int j = memcmp(a, b, x);
	printf("%d\n", j);



	size_t x = 9;
	size_t i = 0;
	void *a  = ft_memalloc(x);
	while (i < x){
		write(1, &a[i], 1);
		i++;}
	puts("\n");
	void **b = &a;
	i = 0;
	while (i < x){
		write(1, &*b[i], 1);
		i++;}
	puts("\n");
	ft_memdel(b);
	while (i < x){
		write(1, &*b[i], 1);
		i++;}
		

	
	char *a;
	size_t i = 0;
	size_t x = 5;
	a = ft_strnew(x);
	while (i < x){
		write(1, &a[i], 1);
		write(1, " a", 2);
		i++;}



	char a[] = "haha";
	char *b = a;
	size_t i = 0;
	size_t x = ft_strlen(a);
	while  (a[i] != '\0'){
		write(1, " ", 1);
		write(1, &a[i], 1);
		i++;}
	i = 0;
	while  (i < x){
		write(1, " ", 1);
		write(1, &b[i], 1);
		i++;}
	i = 0;
	ft_strclr(b);
	while  (i < x){
		write(1, " i", 2);
		write(1, &b[i], 1);
		i++;}



	const char *s1 = "haha";
	const char *s2 = "haha";
	int	i;
	size_t x = 7;
	i = ft_strnequ(s1, s2, x);
	printf("%d\n", i);



	const char *s = "welcome to the jungle.";
	unsigned int start = 5;
	size_t len = 5;
	puts(ft_strsub(s, start, len));



	const char *s1 = "Welcome toi		";
	const char *s2 = " the jungle.			";
	char *str;

	str = ft_strjoin(s1, s2);
	puts(str);



	const char *s = " Helloi				 ";
	puts(s);
	char *a = ft_strtrim(s);
	puts(a);



	char **arr;
	char *s = "*****Hello World!*** How you doing?***";
	char c = '*';
	arr = ft_strsplit(s, c);



	int x = 2147483647;
	char *a = ft_itoa(x);
	puts(a);

*/	

	int fd;
	fd = open("42", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		ft_putstr("open error");
		return (1);
	}
	ft_putnbr(fd);
	ft_putstr("\n");
	int n = 42;
	ft_putnbr_fd(n, fd);
	system("cat 42");
	if (close(fd) == -1)
	{
		ft_putstr("close error");
		return (1);
	}

/*

	int n = 0;
	ft_putnbr(n);

*/
	return (0);
}
