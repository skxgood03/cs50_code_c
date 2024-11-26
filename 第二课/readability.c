#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int lenght_text(string text);
int main(void)
{
    string text = get_string("请输入文本：");
    int len = lenght_text(text);
    printf("文本中的字母数：%i\n",len);

}

int lenght_text(string text){
    int len = strlen(text);
    return len;
}
