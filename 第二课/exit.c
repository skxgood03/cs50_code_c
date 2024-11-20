#include <cs50.h>
#include <stdio.h>

int main(int argc,string argv[]){

    if(argc!=2){
        printf("缺少参数！");
        // 非0的返回一律是有问题的
        return 1;
    }
    else{
        printf("hello,%s\n",argv[1]);
        // 可不写 默认返回0
        return 0;
    }
}
