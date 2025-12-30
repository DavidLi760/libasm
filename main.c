/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 12:45:17 by davli             #+#    #+#             */
/*   Updated: 2025/12/09 12:47:48 by davli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

extern long ft_strlen(const char *s);
extern char *ft_strcpy(char *dst, char *src);
extern int ft_strcmp(char *s1, char *s2);
extern ssize_t ft_write(int fd, const void *buf, size_t len);
extern ssize_t ft_read(int fd, void *buf, size_t count);
extern char *ft_strdup(const char *s);


// int	main()
// {
// 	const char *str = "Hello World!";
// 	long len = ft_strlen(str);
// 	printf("Length: %ld\n", len);
// 	return (0);
// }



// int main(int argc, char **argv)
// {
// 	char dst[1024];
// 	if (argc == 2)
// 	{
// 		ft_strcpy(dst, argv[1]);
// 		printf("The string is : %s\n", dst);
// 	}
// 	return (0);
// }



// int main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		printf("%d\n", ft_strcmp(argv[1], argv[2]));
// 	}
// 	return (0);
// }



// int main(void)
// {
//     ft_write(1, "Hello\n", 6);
//     return 0;
// }



// int main()
// {
//     char buffer[100];
//     ssize_t n;
//     n = ft_read(0, buffer, sizeof(buffer) - 1);
//     if (n == -1)
//     {
//         perror("ft_read error");
//         return 1;
//     }
//     buffer[n] = '\0';
//     printf("Lu %zd octets : %s\n", n, buffer);
//     return 0;
// }



// int main(void)
// {
//     const char *s1 = "Hello libasm!";
//     const char *s2 = "";
//     char *dup1;
//     char *dup2;
//     dup1 = ft_strdup(s1);
//     dup2 = ft_strdup(s2);
//     printf("Original : \"%s\"\n", s1);
//     printf("Dup ASM  : \"%s\"\n", dup1);
//     printf("\nOriginal : \"%s\"\n", s2);
//     printf("Dup ASM  : \"%s\"\n", dup2);
//     if (dup1)
//         free(dup1);
//     if (dup2)
//         free(dup2);
//     return 0;
// }
