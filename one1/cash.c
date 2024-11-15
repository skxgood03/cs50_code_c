#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int n, int i);
int main(void)
{
    int n;
    int frequency;
    do
    {
        n = get_int("请输入需要找零的金额：");
    }
    while (n < 0);
    if (n >= 25)
    {
        frequency = calculate_quarters(n, 25);
    }
    printf("%i\n", frequency);
}

int calculate_quarters(int n, int i)
{
    int num = 0;
    int many = n;
    while (many >= i)
    {
        many = many - i;
        num++;
    }
    if (n >= 10)
    {
        while (many >= 10)
        {
            many = many - 10;
            num++;
        }
    }
    else if (n >= 5 < 10)
    {
        while (many >= 5)
        {
            many = many - 5;
            num++;
        }
    }
    else
    {
        while (many >= 1)
        {
            many = many - 1;
            num++;
        }
    }
    return num;
}
