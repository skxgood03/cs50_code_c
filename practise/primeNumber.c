#include<cs50.h>
#include<stdio.h>

bool prime(int i);
int main(){
    int min  = get_int("请输入最小数：");
    int max  = get_int("请输入最大数：");
    for(int i = min; i<=max;i++ ){
        if(prime(i)){
            printf("%i",i);
        }
    }

}

bool prime(int i){
    // bool type;
    if(i==1){
        return false;
    }
    if(i==2){
        return true;
    }
    for(int u=2; u<i; u++){
        if (i % u == 0){
             type= false;
        }else{
            type= true;
        }
    }
    return type;


}

