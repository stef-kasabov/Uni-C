#include <stdio.h>
#include <stdlib.h>

/*
13.	Учебна зала има правоъгълен размер w на h метра. Залата е разделена на две части – лява и дясна, с коридор 
приблизително по средата. В лявата и в дясната част има редици с бюра. В задната част на залата има голяма входна врата. 
В предната част на залата има катедра с подиум за преподавателя. Едно работно място заема 70 на 120 cm. Коридорът е широк 
поне 100 cm. Изчислено е, че заради входната врата се губи точно 1 работно място, а заради катедрата се губят точно 2 работни 
места. Напишете програма, която прочита размерите на учебната зала и изчислява броя работни места в нея при описаното разположение.
*/

int main()
{
    double w, h;

    // Read input: length (w) and width (h) in meters
    if (scanf("%lf %lf", &w, &h) != 2) {
        return 1; // Protection against incorrect input
    }

    // Convert meters to centimeters
    // Add +0.1 to prevent loss of precision when working with floating point numbers (double)
    int length_cm = (int)(w * 100 + 0.1);
    int width_cm = (int)(h * 100 + 0.1);

    // Calculate number of rows along the length (w)
    // Each desk has a length of 120 cm
    int rows = length_cm / 120;

    // Calculate desks in one row along the width (h)
    // Subtract 100 cm for the corridor and divide the remainder by 70 cm (desk width)
    int desks_per_row = (width_cm - 100) / 70;

    // Calculate total number of places
    // Multiply rows by desks and subtract 3 (1 for door + 2 for teacher's desk)
    int total_places = (rows * desks_per_row) - 3;

    // Print the result
    printf("%d\n", total_places);

    return 0;
}

/*
Example input and output:
input: 15 8.9       |output: 129
input: 8.4 5.2      |output: 39
*/

