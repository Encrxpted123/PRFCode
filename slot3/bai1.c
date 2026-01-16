#include<stdio.h>
//bài 1
int main()
{
    int a = 7;
    int b = 2;
    printf("%d\n", a);
    printf("%d\n", b);
    float kq;
    kq = a + b;
    printf("%d + %d = %f\n", a, b, kq);
    kq = a - b;
    printf("%d - %d = %f\n", a, b, kq);
    kq = a * b;
    printf("%d * %d = %f\n", a, b, kq);
    kq = a / b;
    printf("%d / %d = %f\n", a, b, kq);
}