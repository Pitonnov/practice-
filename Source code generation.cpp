#include <stdio.h>
#include <time.h>
#include<stdlib.h>


void one()
{
    int count = 10;
    while (1)
        {
     printf("%c", rand() % ('Z' - 'A' + 1) + 'A');
     if (--count == 0)
     break;
     printf("\b");
     clock_t begin = clock();
     while (clock() < begin + CLOCKS_PER_SEC / 20);
        }
}
void group()
{
    for (int i = 0; i < 5; i++)
        one();
}
void line()
{
    for (int i = 0; i < 3; i++)
    {
        group();
        printf("-");
    }
    printf(" DONE\n");
}

int main()
{
    time_t now;
    time(&now);
    srand(now);
    rand();
    srand(now);
    
    while (1)
        line();
    
    return 0;

}