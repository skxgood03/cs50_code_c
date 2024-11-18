#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    string s = get_string("输入随机英文转大写：");
    for (int i = 0, n = strlen(s); i < n; i++)
    {

            printf("%c",toupper(s[i]));
    }
    printf("\n");
}
