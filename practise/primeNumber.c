#include<cs50.h>
#include<stdio.h>

bool prime(int i);
int main(){
    int min  = get_int("请输入最小数：");
    int max  = get_int("请输入最大数：");
    for(int i = min; i<=max;i++ ){

        bool over= prime(i);
        if(over){
            printf("%i",i);
        }
    }

}

bool prime(int i){
    if(i==1){
        return False;
    }
    for(int u=0; u<i; u++){
        if (n % i == 0){
             return false;
        }else{
            return true;
        }

    }
}

