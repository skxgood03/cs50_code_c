#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    string s = get_string("输入随机英文转大写：");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if(islower(s[i]))
        {
            //ASCII 值差 大小写值差为32
            printf("%c",toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
