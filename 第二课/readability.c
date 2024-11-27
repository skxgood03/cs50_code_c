#include <ctype.h>
#include <cs50.h>
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
    int len_dc = lenght_dc(text);
    int len_jz = lenght_jz(text);
    printf("文本中的字母数：%i\n",len);
    printf("文本中的单词数：%i\n",len_dc);
    printf("文本中的句子：%i\n",len_jz);
}

int lenght_text(string text){
    int len = strlen(text);
    return len;
}

int lenght_dc(string text){

    int len_dc = 1;
    int len = strlen(text);
    for(int i=0;i<len;i++){

        if(text[i]==' '){
            len_dc ++;
        }
    }
    if(len==0){
        len_dc = 0;
    }
    return len_dc;
}
int lenght_jz(string text){

    int len_jz = 1;
    int len = strlen(text);
    for(int i=0;i<len;i++){

        if(text[i]=='!' ||text[i]=='.'|| text[i]=='?' ){
            len_jz ++;
        }
    }
    if(len==0){
        len_jz = 0;
    }
    return len_jz;
}

