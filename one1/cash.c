#include <cs50.h>
#include <stdio.h>

int calculate_quarters(int n,int i);
int main(void)
{
    int n;
    int frequency;
    int num, many;
    do
    {
        n = get_int("请输入需要找零的金额：");
    }
    while (n < 0);
    if (n >= 25)
    {
        num, many = calculate_quarters(n, 25);
    }
    printf("%i还有%i\n",num,many);

    // }else if(n>=10<25){
    //     frequency +=  calculate_quarters(n,10);
    // }else if(n>=5<10){
    //     frequency +=  calculate_quarters(n,5);
    // }
    // else{
    //     frequency +=  calculate_quarters(n,1);
    // }
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
    return num,many;
}
