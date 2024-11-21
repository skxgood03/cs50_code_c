#include <cs50.h>
#include <stdio.h>

int main()
{
    int arrt[] = {3, 4, 6, 8, 0};
    int length = sizeof(arrt) / sizeof(arrt[0]);
    for (int i = 0; i < length; i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arrt[j] < arrt[min])
            {
                min = j;
            }
        }
        int tmpe = arrt[min];
        arrt[min] = arrt[i];
        arrt[i] = tmpe;
    }
    printf("整体数组：");
    for (int i = 0; i < length; i++)
    {
        printf("%i", arrt[i]);
    }
    printf("\n");
}
