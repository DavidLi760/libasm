#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(const char *s);

int main(void)
{
    const char *s1 = "Hello libasm!";
    const char *s2 = "";
    char *dup1;
    char *dup2;

    dup1 = ft_strdup(s1);
    dup2 = ft_strdup(s2);

    printf("Original : \"%s\"\n", s1);
    printf("Dup ASM  : \"%s\"\n", dup1);

    printf("\nOriginal : \"%s\"\n", s2);
    printf("Dup ASM  : \"%s\"\n", dup2);

    if (dup1)
        free(dup1);
    if (dup2)
        free(dup2);

    return 0;
}
