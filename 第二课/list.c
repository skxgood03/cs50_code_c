#include<cs50.h>
#include<stdio.h>

const int COUNT = 3

int main()
{
    int scort[COUNT];
    for(int i=0; i<COUNT; i++)
    {
        scort[i] = get_int("输出成绩%i",i+1);
    }
    for(int i=0; i<COUNT; i++)
    {
        printf("成绩%i是",i+1);
        charg(scort[i])
    }

}
