//Exponentiation
#include <stdio.h>
#include <math.h>

int main()
{
    double base, power, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("%.2lf^%.2lf = %.2lf", base, power, result);

    return 0;
}
