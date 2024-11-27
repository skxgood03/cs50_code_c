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
    int len_dc = lenght_dc(text);
    printf("文本中的字母数：%i\n",len);
    printf("文本中的单词数：%i\n",len_dc);

}


int lenght_dc(string text){

    int len_dc = 1;
    int in_word= 0;
    int len = strlen(text);
    for(int i=0;i<len;i++){

        if(text[i]==' '){
            if(!in_word){
                len_dc ++;
                in_word=1;
            }
        }

    }
    int len = strlen(text);
    if(len==0){
        len_dc = 0;
    }
    return len_dc;
}
