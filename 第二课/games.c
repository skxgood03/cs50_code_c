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
