#include <cs50.h>
#include <stdio.h>

int main(int argc,string argv[]){
    printf("argc是%i，argv0是%s,argv1是%s",argc,argv[0],argv[1]);
    if(argc==2){
        printf("hello,%s\n",argv[1]);
    }
    else{
        printf("hello,word\n");
    }
}

