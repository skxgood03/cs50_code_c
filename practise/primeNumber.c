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
    bool type;
    if(i==1){
        return false;
    }
    for(int u=0; u<i; u++){
        if (u % i == 0){
             type= false;
        }else{
            type= true;
        }
    }


}

