#include <stdio.h>

void tower_of_hanoi(int n, char from, char to, char extra)
{
    if (n == 0)
    {
        return;
    }

    tower_of_hanoi(n - 1, from, extra, to);
    printf("Move disk %d from rod %c to rod %c \n", n, from, to);
    tower_of_hanoi(n - 1, extra, to, from);
}

int main()
{
    int n;
    scanf("%d", &n); // Number of disk in tower

    tower_of_hanoi(n, 'A', 'C', 'B');

    return 0;
}
