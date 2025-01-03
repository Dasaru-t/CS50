#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's x value? ");
    int y = get_int("What's y value? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }
}
