#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main()
{
    string s = get_string("输入随机英文转大写：");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            //ASCII 值差 大小写值差为32
            printf("%c",s[i] - ('a' - 'A'));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
