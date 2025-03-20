/* exercise3.c -- 把年龄转换成天数并显示，不考虑闰年 */

#include <stdio.h>

int main(void)
{
    int age_years, age_days;

    age_years = 25;

    age_days = 365 * age_years;

    printf("%d years = %d days\n", age_years, age_days);

    return 0;
}
