#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t cd_sales;   //32位整数类型

    scanf("%" SCNd32, &cd_sales);

    printf("CD sales = %5d units\n", cd_sales);

    return 0;
}
