#include <stdio.h>
#include <stdlib.h>

/*
10.	При въведени градуси на ъгъл изкарайте стойността на синуса, косинуса, тангенса и котангенса за този ъгъл. 
*/

int main()
{
    double angle, radians;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    // Convert degrees to radians
    radians = angle * (3.14159265358979323846 / 180.0);

    // Calculate sine, cosine, tangent, and cotangent
    double sine = sin(radians);
    double cosine = cos(radians);
    double tangent = tan(radians);
    double cotangent = 1.0 / tangent;

    // Print the results
    printf("Sine: %lf\n", sine);
    printf("Cosine: %lf\n", cosine);
    printf("Tangent: %lf\n", tangent);
    printf("Cotangent: %lf\n", cotangent);

    return 0;
}