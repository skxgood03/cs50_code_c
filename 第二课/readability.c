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

    int len_dc = 0;
    for(int i=0,len = strlen(text);i<len;i++){
        if(isspace(text[i])){
            len_dc ++;
        }
    }
    int len = strlen(text);
    if(len_dc==0 ||len==0){
        len_dc = 0;
    }else{
        len_dc = 1;
    }
    return len_dc;
}
