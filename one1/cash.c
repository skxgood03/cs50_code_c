#include <cs50.h>
#include <stdio.h>

int 25many(int n);
int main(void)
{
    int n;
    do
    {
        n = get_int("请输入需要找零的金额：");
    }
    while (n < 0);
    printf("%i", 25many(n))
}

int 25many(int n)
{
    int num = 0;
    int many = n;

    while (many < 25)
    {

        many = many - 25;
        num++;
    }
    return num
}
