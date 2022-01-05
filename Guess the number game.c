#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, guess, attempt=1;
    srand(time(0));
    num=rand()%100+1;
    
    do
    {
        printf ("Guess the number between 1-100: ");
        scanf ("%d", &guess);

        if (guess<num)
        {
            printf ("Enter higher number!");
        }
        else if (guess>num)
        {
            printf ("Enter lower number!");
        }
        else 
        {
            printf ("You have guessed the number in %d attempts.", attempt);
        }
        attempt++;
    } while (guess!=num);

    return 0;
}