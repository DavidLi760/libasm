#include <unistd.h>

ssize_t ft_write(int fd, const void *buf, size_t len);

int main(void)
{
    ft_write(1, "Hello\n", 6); // write vers stdout
    return 0;
}

