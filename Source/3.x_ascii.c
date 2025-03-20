/* ascii.c -- char类型的ASCII码 */

#include <stdio.h>

int main(void)
{
    char c1, c2, c3, c4;

    c1 = 'A';   //用''括起来，可移植性高
    c2 = 65;    //'A'的十进制ASCII码
    c3 = 0101;  //65的八进制
    c4 = 0x41;  //65的十六进制

    printf("%c %c %c %c\n", c1, c2, c3, c4);

    //'\012'是'\n'的八进制ASCII码
    //'\010'是'\b'的八进制ASCII码
    printf("Hello!\012最后一个字符被退格\0101 \n");

    return 0;
}
