#include <cs50.h>
#include <stdio.h>

int main(int argc,string argv[]){
    printf("argc是%i，argv0是%s,argv1是%s",argc,argv[0],argv[1]);
    //在运行程序./argv0 时argc是1    argv[0]是“./argv0”
    // 当./argv0 xxx 时  argc是2（）argv[0]是“./argv0”argv[1]是“xxx”
    if(argc==2){
        printf("hello,%s\n",argv[1]);
    }
    else{
        printf("hello,word\n");
    }
}

