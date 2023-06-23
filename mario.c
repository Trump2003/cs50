#include <stdio.h>
#include <cs50.c>
int get_size(void);
void printf_grid(int size);
int main()
{
    int n = get_size();
    printf_grid(n);
}
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    } 
    while (n < 1);
    return n;
}
void printf_grid(int size)
{
   
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}