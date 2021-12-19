#include <stdio.h>

int main()
{
    // PROGRAME TO CALCULATE VOLUME OF A CIRCLE
    // WE KNOW THAT VOLUME OF A CIRCLE IS PI*R*R*H
    // SO PI = 3.14 
    // OUR FORMULA IS 3.14 * R * R * H
    int r ;
    int height;
    float pi = 3.14;
    printf("what is your radius \n");
    scanf("%d", &r);
    printf("what is your height \n");
    scanf("%d", &height);
    printf("your volume of a circle is %f \n", pi * r * r * height);
    return 0;
}
