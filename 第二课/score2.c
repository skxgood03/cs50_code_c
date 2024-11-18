#include <cs50.h>
#include <stdio.h>

const int COUNT = 3;
void charg(int count,int score[]);
int main()
{
    int score[COUNT]; // 创建一个大小为count的数组
    for (int i = 0; i < COUNT; i++)
    {
        score[i] = get_int("输出成绩%i", i + 1);
    }
    // printf("当前数组%i", score);
    charg(COUNT, score);
}
void charg(int count, int score[])
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < score[i]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
