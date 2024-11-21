#include <cs50.h>
#include <stdio.h>


int main(){
    int arrt[] = {3,4,6,8,0};
    int length = sizeof(arrt) / sizeof(arrt[0]);
    if (length>0){

        for(int i=0;i<length; i++){
            for(int j=0;j<length-i-1;j++){
                if (arrt[j]>arrt[j+1]){
                    // arrt[j],arrt[j+1]=arrt[j+1],arrt[j]
                    int tmpe = arrt[j];
                    arrt[j] = arrt[j+1];
                    arrt[j+1] = tmpe;
                }
            }
        }
        printf("整体数组：");
        for(int i=0;i<length; i++){
            printf("%i",arrt[i]);
        }

    }
}
