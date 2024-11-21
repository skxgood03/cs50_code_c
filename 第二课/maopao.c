#include <cs50.h>
#include <stdio.h>


int main(int arrt[]){
    int length = sizeof(arrt) / sizeof(arrt[0]);
    if (length>0){

        for(int i=0;i<length; i++){
            for(int j=0;j==j-i-1;j++){
                if (arrt[j]>arr[j+1]){
                    arrt[j],arrt[j+1]=arrt[j+1],arrt[j]
                }
            }
        }
        printf("整体数组：")
        for(int i=0;i<length; i++){
            print("%i",arrt[i])
        }

    }
}
