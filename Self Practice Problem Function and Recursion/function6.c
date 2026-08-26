#include<stdio.h>

void calculateareaSquare(float side);
void calculateareaCircle(float radius);
void calculateareaRectangle(float length,float breadth);
int main()
{
    float side,radius,length,breadth;
    printf("Enter the side of the square:");
    scanf("%f",&side);
    calculateareaSquare(side);
    printf("\nEnter the radius of the circle:");
    scanf("%f",&radius);
    calculateareaCircle(radius);
    printf("\nEnter the length and breadth of the rectangle:");
    scanf("%f%f",&length,&breadth);
    calculateareaRectangle(length,breadth);
    return 0;
}
void calculateareaSquare(float side){
    float area=side*side;
    printf("The area of the square is :%f",area);
}

void calculateareaCircle(float radius){
    float area=3.14*radius*radius;
    printf("The area of the circle is :%f",area);
}

void calculateareaRectangle(float length,float breadth){
    float area=length*breadth;
    printf("The area of the rectangle is :%f",area);
}