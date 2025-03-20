// fathm_ft.c -- 把2音寻转换成英尺

#include <stdio.h>

int main(void)
{
    int feet, fathoms;

    fathoms = 2;

    feet = 6 * fathoms;     // 1音寻=6英尺=1.8米

    printf("There are %d feet in %d fathoms\n", feet, fathoms);

    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}
