/* exercise5.c -- 自定义函数练习 */

#include <stdio.h>

void br(void);

void ic(void);

int main(void)
{
    br();

    printf(", ");

    ic();

    printf("\nInida, China,\nBrazil, Russia\n");

    return 0;
}

void br(void)
{
    printf("Brazil, Russia");

    return;
}

void ic(void)
{
    printf("India, China");

    return;
}
