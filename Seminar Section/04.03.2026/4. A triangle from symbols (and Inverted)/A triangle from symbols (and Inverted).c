#include <stdio.h>
#include <stdlib.h>

/*
 4.	Направете програма, която рисува триъгълник с въведен знак от потребителя.
 a) Направете триъгълника и наобратно.
*/

int main ()
{
    char symbol;
    int height = 5;

    printf("Enter symbol: ");
    scanf(" %c", &symbol);

    // --- Upright Hollow Triangle ---
    printf("\nUpright:\n");
    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // Print symbols and hollow spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == height) {
                printf("%c", symbol);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // --- Inverted Hollow Triangle ---
    printf("\nInverted:\n");
    for (int i = height; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // Print symbols and hollow spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == height) {
                printf("%c", symbol);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
/*
Expexted input: §

Expected output:
            §
         §    §
      §          §
   §                §
§ § § § § § § § § § § § 

*/