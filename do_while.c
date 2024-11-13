#include <cs50.h>
#include <stdio.h>

int do_while_fun(string *prompt);

int main()
{
    int i = do_while_fun("请输入一个数字: ");
    printf("%i\n", i);
}

int do_while_fun(string *prompt)
{
    int n;
    do
    {
        n = get_int(prompt);
    }
    while (n < 1);
    return n;
}
