#include <stdio.h>

char *ft_strcpy(char *dst, char *src);

int main(int argc, char **argv)
{
	char dst[1024];

	if (argc == 2)
	{
		ft_strcpy(dst, argv[1]);
		printf("The string is : %s\n", dst);
	}
	return (0);
}
