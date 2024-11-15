#include<cs50.h>
#include<stdio.h>

int main(){
    int min  = get_int("请输入最小数：");
    int max  = get_int("请输入最大数：");
    for(int i = min; i<=max; ){
        printf("%i",i);
    }
}
