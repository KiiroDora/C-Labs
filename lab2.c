#include <stdio.h>

 char char1;
 double double1;
 float width, height, area, circleArea, circum;
 int radius;

 //define pi for circle calculations
 #define PI 3.14

 int main() {
    //FIRST EXAMPLE

    char1 = 'X'; //store char value on variable char1
    double1 = 76.1; //store double value on variable double1
    printf("The character is = %c \nThe value is = %f \n", char1, double1); //print the values stored in char1 and double1

    //SECOND EXAMPLE

    width = 3; //store float value on variable width for the rectangle
    height = 4; //store float value on variable height for the rectangle

    area = width * height; //calculate the area of rectangle by product of width and height, store it in area variable

    printf("\nArea of rectangle with side lengths of %f and %f is %f \n", width, height, area); //print the lengths and the area of the rectangle

    //THIRD EXAMPLE

    radius = 5; //store int value in radius variable

    circleArea = PI * radius * radius; //calculate circle area using radius and pi
    circum = 2 * PI * radius; //calculate circle circumference using radius and pi

    printf("\nArea of this circle is %f, and the circumference of this circle is %f \n", circleArea, circum); //print circle area and circumference


    return 0; //DONE ^3^
 }
