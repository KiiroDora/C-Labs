#include <stdio.h>

int main() {
    //EXERCISE 0
    int num, dig1, dig2; //the variables to be used

    void scanNum () { //method to scan number
        printf("Please enter a two digit number to receive the sum of the digits.\n");
        scanf("%d", &num); //scanning the number from keyboard
        if(num / 100 != 0) { //if it's more than a two digit number
            printf("Please enter a TWO digit number.\n"); //failsafe message
            scanNum(); //start the method again
        }
        dig1 = num / 10; //obtain the first digit by dividing by 10
        dig2 = num % 10; //obtain the second digit by taking the modulus of the number by 10

        printf("%d + %d = %d\n\n", dig1, dig2, dig1 + dig2); //take the sum and print the result
    }

    //EXERCISE 1
    int inp, num1, num2;

    void calculate() {
        printf ("Please enter the operation to be done.\n 1: Sum\n 2: Subtraction\n 3: Product\n");
        scanf("%d", &inp);

        if (3 - inp < 0) {
            printf("Invalid input. Try again.\n\n");
            calculate();
        }

        else {
            printf("Please enter the first number.\n");
            scanf("%d", &num1);

            printf("Please enter the second number.\n");
            scanf("%d", &num2);

            switch (inp) {
                case 1:
                    printf("%d + %d = &d \n", num1, num2, num1 + num2);
                    break;
                case 2:
                    printf("%d - %d = %d \n", num1, num2, num1 - num2);
                    break;
                case 3:
                    printf("%d * %d = %d \n", num1, num2, num1 * num2);
                    break;
            }
        }
    }

    //EXERCISE 2
    double fahr, celc;

    void convert() {
        printf("\n\nPlease enter the Celsius value to be converted to Fahrenheit.\n");
        scanf("%lf", &celc);
        fahr = celc * 1.8 + 32.0;
        printf("\nThe Fahrenheit value is: %f \n", fahr);
    }

    //EXERCISE 3
    double weight, height, bmiNum;

    void bmi () {
        printf("\nWhat is your weight?\n");
        scanf("%lf", &weight);

        printf("\nWhat is your height?\n");
        scanf("%lf", &height);

        bmiNum = (weight / (height * height));
        printf("\nHeight: %f \nWeight: %f \nYour BMI is: %f \n", height, weight, bmiNum);
    }

    //and...
    scanNum();
    calculate();
    convert();
    bmi();
    //DONE (^o^)/
    return 0;
}
