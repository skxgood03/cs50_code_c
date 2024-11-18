#include <cs50.h>
#include <stdio.h>

int calculate_coins(int n);  // 更改函数名称，使其意义更清楚

int main(void)
{
    int n;
    int frequency;
    do
    {
        n = get_int("请输入需要找零的金额：");
    }
    while (n < 0);

    frequency = calculate_coins(n);

    printf("%i\n", frequency);
}

int calculate_coins(int n)
{
    int num = 0;

    num += n / 25;     // 使用25美分硬币的个数
    n %= 25;           // 剩余需要找零的金额

    num += n / 10;     // 使用10美分硬币的个数
    n %= 10;           // 剩余需要找零的金额

    num += n / 5;      // 使用5美分硬币的个数
    n %= 5;            // 剩余需要找零的金额

    num += n;          // 剩余部分全用1美分硬币

    return num;
}
