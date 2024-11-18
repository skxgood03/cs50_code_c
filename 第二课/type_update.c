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
        int n = (int)s[i] //显式转换 将str转为int 可以获得位数
        int n = s[i] //这样也ok
        printf("%c %i\n", s[i],n);
        // 也可以直接注释上面两行 直接写这句（隐式转换）
        printf("%c %i\n", s[i],s[i]);


    }

}
