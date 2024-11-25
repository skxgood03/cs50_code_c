#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(string word) ;
int main()
{
    string p1 = get_string("请输入你的字母：");
    string p2 = get_string("请输入你的字母：");

    int scores1 = compute_score(p1);
    int scores2 = compute_score(p2);
    if (scores1 > scores2)
    {
        printf("Player 1 wins!\n");
    }
    else if (scores1 < scores2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("平局");
    }
}

int compute_score(string word)
{
    int score = 0;
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        // 通过减去基字符（在这里是字母 A），将字符映射到一个从0开始的索引，从而能够方便地访问相应的数据。如 word[i]=H
        // 则 H的ASCII 码值是 72  A 的 ASCII 码值是 65 72-65=7 正好对应列表的第七位 POINTS[7] 分数为4
        // H 也正好是第七位 ABCDEFH...
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
