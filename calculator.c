#include <stdio.h>

int num1, num2, choice, res;

int main() {

    void calculator() {
        printf("\nEnter the numbers to be operated on. Leave a space in between the numbers.\n");
        scanf("%d %d", &num1, &num2);

        printf("\nEnter the operation to be done.\n1: summation\n2: subtraction\n3: division\n4: product\n5: remainder\n");
        scanf("%d", &choice);

        if (choice == 1) {
            res = num1 + num2;
            printf("\nSum of %d and %d = %d", num1, num2, res);
        }

        else if (choice == 2) {
            res = num1 - num2;
            printf("\n%d subtracted from %d = %d", num2, num1, res);
        }

        else if (choice == 3) {
            res = num1 / num2;
            printf("\n%d divided by %d = %d", num1, num2, res);
        }

        else if (choice == 4) {
            res = num1 * num2;
            printf("\nProduct of %d and %d = %d", num1, num2, res);
        }

        else if (choice == 5) {
            res = num1 % num2;
            printf("\nRemainder of %d divided by %d = %d", num1, num2, res);
        }

        printf("\nDo you want to do another operation?\n0: No\n1: Yes\n");
        scanf("%d", &choice);

        if (choice == 0) {
        return 0;
        }

        else {
            calculator();
        }
    }

    calculator();
}
