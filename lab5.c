#include <stdio.h>

int main() {
    int i = 0;

    //EXERCISE 0

    while (i <= 1000) {
        printf("%d\n", i);
        i += 2;
    }

    //EXERCISE 1
    i = 0;

    while (i < 100) {
        printf("\nHello!\n", i);
        i++;
    }

    //EXERCISE 2
    i = 0;
    int sum = 0, inp;
    double avg;

    while (i < 10) {
        printf("\nPlease enter a number. %d left\n", 10-i);
        scanf("%d", &inp);
        sum += inp;
        i++;
    }

    avg = (double)sum /10;
    printf("\nThe average of your numbers is: %f \n\n", avg);

    //EXERCISE 3
    i = 0;
    int inp2;

    printf("Please enter a number to be counted backwards to 1.\n");
    scanf("%d", &inp2);

    while (i <= inp2) {
        printf("%d ", inp2-i);
        i++;
    }


    //EXERCISE 4
    i = 0;
    int mul;

    printf("\nPlease enter a number to display the multiplication table of.\n");
    scanf("%d", &mul);

    while (i < 10) {
        printf("%d * %d = %d \n", mul, i+1, mul*(i+1));
        i++;
    }

    return 0;
}
