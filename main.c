#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y;
    printf("Enter x: ");
    scanf("%lf", &x);

    if( x >= -20 && x < -10)
    y = pow(2, fabs(x));

    else if ( x >= -2 && x < 2 )
    y = fabs(sin(x))/ (cos(x)+2);

    else if ( x >= 5 && x < 10 )
    y = 2*x+sqrt(pow(x,2)-4);

    else
    y = (x/5)+((x-1)/2);

    system("cls");

    printf("x = %lf", x);
    printf("\ny = %lf", y);

    return 0;

}
