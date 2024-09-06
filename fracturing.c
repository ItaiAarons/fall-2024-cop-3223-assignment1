#include <stdio.h>
#include <math.h>

// Define PI constant
#define PI 3.14159

// Function prototypes
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
void askForPoints(double *x1, double *y1, double *x2, double *y2);

int main(int argc, char **argv) {
    // Call the functions in sequence
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}

// Function to ask for points (x1, y1) and (x2, y2)
void askForPoints(double *x1, double *y1, double *x2, double *y2) {
    printf("Enter x1 and y1: ");
    scanf("%lf %lf", x1, y1);
    printf("Enter x2 and y2: ");
    scanf("%lf %lf", x2, y2);
}

// Function to calculate the distance between two points
double calculateDistance() {
    double x1, y1, x2, y2;
    askForPoints(&x1, &y1, &x2, &y2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Point #1 entered: x1 = %.2f, y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f, y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    return distance;
}

// Function to calculate the perimeter (assuming a circle)
double calculatePerimeter() {
    double distance = calculateDistance();
    
    double perimeter = 2 * PI * (distance / 2);  // Perimeter of a circle
    
    printf("The perimeter of the city is %.2f\n", perimeter);
    
    return perimeter;
}

// Function to calculate the area (assuming a circle)
double calculateArea() {
    double distance = calculateDistance();
    
    double area = PI * pow(distance / 2, 2);  // Area of a circle
    
    printf("The area of the city is %.2f\n", area);
    
    return area;
}

// Function to calculate the width (arbitrary task)
double calculateWidth() {
    double x1, y1, x2, y2;
    askForPoints(&x1, &y1, &x2, &y2);
    
    double width = fabs(x2 - x1);  // Simple width calculation
    
    printf("The width of the city is %.2f\n", width);
    
    return width;
}

// Function to calculate the height (arbitrary task)
double calculateHeight() {
    double x1, y1, x2, y2;
    askForPoints(&x1, &y1, &x2, &y2);
    
    double height = fabs(y2 - y1);  // Simple height calculation
    
    printf("The height of the city is %.2f\n", height);
    
    return height;
}
