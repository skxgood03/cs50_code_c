#include<cs50.h>
#include<stdio.h>

int main()
{
	int x = get_int("x: ");
    int y = get_int("y: ");
    if(x>y){
        printf("x>y\n");
    }else if(x<y){
       printf("x<y\n");
    }else{
        printf("x=y\n");
    }
}
