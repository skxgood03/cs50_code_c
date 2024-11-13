#include<cs50.h>
#include<stdio.h>

int main(){
    int x =  get_float("x:");
    int y =  get_float("y:");

    printf("x+y=%i\n",x+y);
    printf("x-y=%i\n",x-y);
    printf("x*y=%i\n",x*y);
    printf("x/y=%i\n",x/y);

}
