/* Program to determine type of EM wave for a given wavelength */
#include <stdio.h>
int main(void)
{
    float lambda;
    

    printf("Enter wavelength>>>");
    scanf("%f",&lambda);

    printf("Electromagnetic wave is");
    if (lambda<1e-11) puts("Gamma Ray !!!");
    else if(lambda<1e-9) puts("X-ray");
    else if(lambda<400e-9) puts("ultraviolet");
    else if (lambda<700e-9) puts("LIGHT");
    else if(lambda<1e-3) puts("Infrared");
    else if(lambda<1e-1) puts ("microwave");
    else  puts("Radio wave");

    return (0);
}