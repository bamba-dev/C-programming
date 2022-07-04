#include <stdio.h>
#include <stdlib.h>

int main()
{
    short mon_short = 34;

    printf("Mon mon_short = %d et prend en memoire %d octets \n", mon_short, sizeof(short));

    long mon_long = 140;

    printf("Mon mon_long = %ld et prend en memoire %d octets \n", mon_long, sizeof(long));


    char mon_char = 'A';
    printf("Mon char = %c et prend en memoire %d octets \n", mon_char, sizeof(char));


    float mon_float = 0.5;
    printf("Mon float = %f et prend en memoire %d octets \n", mon_float, sizeof(float));

    double mon_double = 14.6;
    printf("Mon double = %f et prend en memoire %d octets \n", mon_double, sizeof(double));

    return 0;
}
