#include<cs50.h>
#include<stdio.h>

int main(){
    int x =  get_int("x:\n");
    int y =  get_int("y:\n");

    printf("x+y=%i\n",x+y);
    printf("x-y=%i\n",x-y);
    printf("x*y=%i\n",x*y);
    printf("x/y=%i\n",x/y);

}
