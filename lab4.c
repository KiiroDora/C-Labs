#include <stdio.h>

int main() {

    // EXERCISE 0
    int pulse;
    int restHeartRate;

    printf("Please enter your pulse rate. (For 10 seconds) \n");
    scanf("%d", &pulse);

    restHeartRate = pulse*6;

    if (restHeartRate > 56) {
        printf("Keep up your exercise program! \n");
    }

    else {
        printf("Your heart is healthy! \n\n");
    }

    // EXERCISE 1
    int num;

    printf("Please enter a number. \n");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 12 == 0) {
        printf("Your number is divisible by 5 and 12! :) \n\n");
    }

    else {
        printf("Your number is not divisible by 5 and 12... :( \n\n");
    }

    // EXERCISE 2
    int price, age, roomCount;

    printf("Please enter the price of the apartment. \n");
    scanf("%d", &price);

    printf("Please enter the number of rooms. \n");
    scanf("%d", &roomCount);

    printf("Please enter the age of the apartment. \n");
    scanf("%d", &age);

    printf("Based on your inputs, this apartment...");

    if (price < 400000 && age <= 10 && roomCount >= 3) {
        printf(" Completely meets your criteria! \n\n");
    }

    else {
        printf(" Does not meet your criteria... \n\n");
    }

    // EXERCISE 3
    int grade;
    char letter;

    printf("Please enter your test score. \n");
    scanf("%d", &grade);

    if (grade >= 90) {
        letter = 'A';
    }

    else if (grade >= 80 && grade < 90) {
        letter = 'B';
    }

    else if (grade >= 70 && grade < 80) {
        letter = 'C';
    }

    else if (grade >= 60 && grade < 70) {
        letter = 'D';
    }

    else if (grade < 60) {
        letter = 'F';
    }

    printf("Your letter grade is %c. \n", letter);

    return 0;
}
