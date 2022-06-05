#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int count;
    int fd1;
    int fd2;
    int fd3;

    fd1 = open("data.txt", O_RDONLY);
    fd2 = open("text.txt", O_RDONLY);
    fd3 = open("baza.txt", O_RDONLY);
    count = 0;
    while (count < 3)
    {
        printf("%s", get_next_line(fd1));
        count++;
    }
    printf("\n");
    while (count < 6)
    {
        printf("%s", get_next_line(fd2));
        count++;
    }
    printf("\n");
    while (count < 9)
    {
        printf("%s", get_next_line(fd3));
        count++;
    }
    return (0);
    //printf("%s", get_next_line(fd));
}