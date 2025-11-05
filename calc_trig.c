#include <stdio.h>
#include <math.h>

int main() {
    printf("------ Renato Bressan Trigonometric Calculator ------\n");
    float x;
    char opt;
    char cont = 'Y';
    while (cont == 'Y' || cont == 'y') {
        printf("Enter 'x' in degrees: ");
        scanf("%f", &x);
        if (x < 0 || x > 360) {
            printf("The calculator only accepts x values from 0 to 360.\n");
            return 0;
        }
        do {
            printf("Enter 'S' for sine, 'C' for cosine, or 'T' for tangent: ");
            scanf("%c", &opt);
            switch(opt) {
                case 'S':
                    printf("The sine is: %.3f\n", sin(x * M_PI / 180));
                    break;
                case 'C':
                    printf(" The cosine is: %.3f\n", cos(x * M_PI / 180));
                    break;
                case 'T':
                    if (x != 90 && x != 270) {
                        printf("The tangent is: %.3f\n", tan(x * M_PI / 180));
                        break;
                    } else if (x == 90 || x == 270) {
                        printf("Error. There's a divison by zero:\n");
                        printf("Tangent is equal to sine divided by cosine. ");
                        printf("Cosine of 90 and 270 degrees equals 0. ");
                        printf("Therefore, there is a division by zero, which in turn cannot be performed.\n");
                        break;
                }
                default:  
                    printf("Error. ");
            }
        } while (opt != 'S' && opt != 'C' && opt != 'T');
        printf("Enter 'Y' ('Yes') to continue or 'N' ('No') to exit: ");
        scanf(" %c", &cont);
        while (cont != 'Y' && cont != 'y' && cont != 'N' && cont != 'n') {
            printf("Error, please enter 'Y' ('Yes') to continue or 'N' ('No') to exit: ");
            scanf(" %c", &cont);
        } 
    }
    printf("Thanks for using the calculator!\n");
    return 0;
}
