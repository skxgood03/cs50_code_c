#include <cs50.h>
#include <stdio.h>

int main()
{
    string name = get_string("What is your name?\n");

    printf("Hello, %s!\n", name);
    printf("Hello, World!\n");
    return 0;
}
