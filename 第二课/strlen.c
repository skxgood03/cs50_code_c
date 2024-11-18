#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main()
{
    string s = get_string("随便输入一个英文：");
    // for (int i = 0; i < strlen(s); i++) 这样写效率不高
    int count = strlen(s);
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", s[i]);
    }

}
