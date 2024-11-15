#include <cs50.h>
#include <stdio.h>

bool prime(int i);
int main()
{
    int min = get_int("请输入最小数：");
    int max = get_int("请输入最大数：");
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int i)
{
    if (i <= 1)
    {
        return false;
    }
    if (i == 2)
    {
        return true;
    }
    // 如果数值是偶数且大于 2，则不是质数
    if (i % 2 == 0)
    {
        return false;
    }
    float y = 0.0;
    for (int u = 3; u < i; u++)
    {
        if (i % u == 0)
        {
            return false;
        }
    }
    return true;
}
