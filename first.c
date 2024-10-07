#include<stdio.h>
// create a program to calculate the area of a rectangle (by multiplying the length and width)
int main(){
// Create integer variables
int length = 7;
int width = 5;
int area;

// Calculate the area of a rectangle
area = length * width;

// Print the variables
printf("Length is: %d\n", length);
printf("Width is: %d\n", width);
printf("Area of the rectangle is: %d", area);
return 0;
}