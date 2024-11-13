#include<cs50.h>
#include<stdio.h>

int main()
{
	char x = get_char("y or n: ");
    if(x =='Y' || x=='y'){
        printf("yes\n");
    }else if(x =='N' || x=='n'){
       printf("no\n");
    }else{
        printf("都不是\n");
    }
}
