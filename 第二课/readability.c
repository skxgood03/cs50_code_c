#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int lenght_text(string text);
int lenght_dc(string text);
int main(void)
{
    string text = get_string("请输入文本：");
    int len = lenght_text(text);
    int len_dc = lenght_dc(text);
    printf("文本中的字母数：%i\n",len);
    printf("文本中的单词数：%i\n",len_dc);

}

int lenght_text(string text){
    int len = strlen(text);
    return len;
}

int lenght_dc(string text){

    int len_dc = 1;
    int in_word= 0;
    int num_sentences=0;
    for(int i=0,len = strlen(text);i<len;i++){

        if (isalpha(text[i])) {  // 是字母

            // 如果这是一个字母且之前未在单词中，意味着新单词的开始
            if (!in_word) {
                len_dc++;
                in_word = 1;  // 进入单词状态
            }
        } else {
            in_word = 0;  // 离开单词状态
            if (text[i] == '.' || text[i] == '!' || text[i] == '?') {  // 是句子的结束标志
                num_sentences++;
            }
        }

    }
    int len = strlen(text);
    if(len==0){
        len_dc = 0;
    }
    return len_dc;
}
