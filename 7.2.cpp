#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ZZZ (int mas[], int a)
{
    for(int i = 0; i < a; i++)
    {        
        mas[i] = rand() % 22 + 10;
    }
    printf ("mass =");
    for (int i = 0; i < a; i++)
    {
        printf ("%4i", mas [i]);
    }
}

int main()
{
    srand (time (NULL));
    int mas0 [100];
    int mas1 [100];
    int a, b = 0;
    while ((a < 1) || (a > 100))
    {
        printf ("vvod 1 mass = ");
        scanf ("%4i", &a);
    }
    
    while ((b < 1) || (b > 100))
    {
        printf ("vvod 2 mass = ");
        scanf ("%4i", &b);
    }
    ZZZ (mas0, a);
    
    printf ("\n\n");
    ZZZ (mas1, b);
    
    return 1;
}
