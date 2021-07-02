#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    char s, d;
    int ft;
    printf("Temprature Conversion\n");
    printf("Temprature:- ");
    scanf("%d", &t);
    getchar();
    printf("Scale (Enter C/c for celcius of F/f for faraniet:- ");
    scanf("%c", &s);
    getchar();
    if (s == 'c' || s == 'C')
    {
        ft = (t+32)*9/5;
        printf("Final = %d\n", ft);
        getchar();
    }
    else if(s == 'f' || s == 'F')
    {
        ft = (t-32)*5/9;
        printf("Final = %d\n", ft);
        getchar();
    }
    else
    {
        printf("Error in Scale\n");
        getchar();
    }
    return 0;
}
