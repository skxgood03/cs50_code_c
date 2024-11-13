#include <cs50.h>
#include <stdio.h>

// 必须把调用的函数写在调用者上面 ，或者将函数第一行写在上面如下
void one_fun();

int main()
{
    one_fun(3);
}

void one_fun(int n)
{
    for (int i = 0; i < 3; i++)
    {
        printf("hello，this is one\n");
    }
}
