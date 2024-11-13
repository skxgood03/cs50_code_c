#include<cs50.h>
#include<stdio.h>

int main()
{
	int n = get_int("number: ");
    if(n%2==0){
        printf("这是偶数\n");
    }else{
        printf("这是奇数\n");
    }
}
