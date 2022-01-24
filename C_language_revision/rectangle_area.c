#include<stdio.h>
// display perimeter of rectangel
// display area of rectangle
int main(){
    double width_rectangle = 0;
    double height_rectangle = 0;
    double perimeter = 0;
    double area = 0;
    
    printf("Width of rectangle: ");
    scanf("%lf",&width_rectangle);
    printf("Height of rectangle: ");
    scanf("%lf",&height_rectangle);
    // printing
    perimeter = 2 * (width_rectangle + height_rectangle);
    area = width_rectangle * height_rectangle;
    printf("Height: %.2lf\nWidth: %.2lf\nPerimenter: %lf\nArea: %lf\n", height_rectangle,width_rectangle, perimeter, area);

    return 0;
}