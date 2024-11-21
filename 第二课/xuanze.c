#include <cs50.h>
#include <stdio.h>


int main(){
    int arrt[] = {3,4,6,8,0};
    int length = sizeof(arrt) / sizeof(arrt[0]);
    for(int i=0;i<length; i++){
        int min = arr[i];
        for(int j=0;j<length+1;j++){
            if (arr[j]<arr[min]){
                min = j
                int tem = arr[j];
                arr[j] = tem;
            }
        }
    }
}
