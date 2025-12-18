#include <stdio.h>
#include <unistd.h>

ssize_t ft_read(int fd, void *buf, size_t count);

int main() {
    char buffer[100];
    ssize_t n;

    // Appel de ft_read pour lire depuis stdin
    n = ft_read(0, buffer, sizeof(buffer) - 1);
    if (n == -1) {
        perror("ft_read error");
        return 1;
    }

    buffer[n] = '\0';  // Terminer la chaîne
    printf("Lu %zd octets : %s\n", n, buffer);

    return 0;
}

