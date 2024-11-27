#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int lenght_text(string text);
int lenght_dc(string text);
int lenght_jz(string text);
int main(void)
{
    string text = get_string("请输入文本：");
    int len = lenght_text(text);

    printf("文本中的字母数：%i\n", len);
}

int lenght_text(string text)
{
// 初始化计数器
    int num_letters = 0;
    int num_words = 0;
    int num_sentences = 0;

    // 标记是否在单词中
    int in_word = 0;
    for (int i = 0,n = strlen(text); i < len; i++){
        if (isalpha(text[i]))
        {
            num_letters ++;
            if (!in_word) {
                num_words++;
                in_word = 1;  // 进入单词状态
            }else {
            in_word = 0;  // 离开单词状态
            if (text[i] == '.' || text[i] == '!' || text[i] == '?') {  // 是句子的结束标志
                num_sentences++;
            }
        }
    }
}

int lenght_dc(string text)
{

    int len_dc = 1;
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
    }
    if (len == 0)
    {
        len_dc = 0;
    }
    return len_dc;
}
int lenght_jz(string text)
{

    int len_jz = 1;
    int len_dc = 1;
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        if (isalpha(text[i]))
        {
            if (text[i] == ' ')
            {
                len_dc++;
            }
        }
        else
        {

            if (text[i] == '!' || text[i] == '.' || text[i] == '?')
            {
                len_jz++;
            }
        }
    }
    if (len == 0)
    {
        len_jz = 0;
        len_dc = 0;
    }
    printf("文本中的单词数：%i\n", len_dc);
    printf("文本中的句子：%i\n", len_jz);
    return len_jz;
}
