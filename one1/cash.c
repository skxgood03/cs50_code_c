#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int n);
int main(void)
{
    int n;
    int frequency;
    do
    {
        n = get_int("请输入需要找零的金额：");
    }
    while (n < 0);
    printf("%i\n", calculate_quarters(n));
    if(n>=25){
       frequency +=  calculate_quarters(n,25);
    }else if(n>=10){
        frequency +=  calculate_quarters(n,10);
    }else if(n>=5){
        frequency +=  calculate_quarters(n,5);
    }
    else{
        frequency +=  calculate_quarters(n,1);
    }
}

int calculate_quarters(int n,int i)
{
    int num = 0;
    int many = n;
    while (many >= i)
    {
        many = many - i;
        num++;
    }
    return num;
}
