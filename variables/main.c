#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mon_int = 14;
    int taille_int = sizeof(int);

    printf("Mon int = %d et prend en memoire %d octets \n", mon_int, taille_int);


    char mon_char = 'A';
    printf("Mon char = %c et prend en memoire %d \n", mon_char, sizeof(char));


    float mon_float = 0.5;
    printf("Mon float = %f et prend en memoire %d \n", mon_float, sizeof(float));

    double mon_double = 14.6;
    printf("Mon double = %f et prend en memoire %d \n", mon_double, sizeof(double));

    return 0;
}
