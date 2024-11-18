#include<cs50.h>
#include<stdio.h>

const int COUNT = 3;
void charg(int score);
int main()
{
    int scort[COUNT]; //创建一个大小为count的数组
    for(int i=0; i<COUNT; i++)
    {
        scort[i] = get_int("输出成绩%i",i+1);
    }
    for(int i=0; i<COUNT; i++)
    {
        printf("成绩%i是",i+1);
        charg(scort[i]);
    }

}
void charg(int score){
    for(int i=0;i<score; i++){
        printf("#");
    }
    printf("\n");
}
