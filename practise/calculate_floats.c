#include<cs50.h>
#include<stdio.h>

int main(){
    float x =  get_float("x:");
    float y =  get_float("y:");

    printf("x+y=%i\n",x+y);
    printf("x-y=%i\n",x-y);
    printf("x*y=%i\n",x*y);
    printf("x/y=%i\n",x/y);

}
