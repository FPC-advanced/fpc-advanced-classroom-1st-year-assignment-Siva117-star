#include <stdio.h>
typedef struct _triangle {
    float base, altitude, area;
} Triangle;
Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main() {
    Triangle x;
    x = input_triangle();
    
    find_area(&x);
    
    output(x);
    
    return 0;
}
Triangle input_triangle() {
    Triangle t;
    printf("Enter the base of triangle: ");
    scanf("%f", &t.base);
    printf("Enter the Altitude of triangle: ");
    scanf("%f", &t.altitude);
    return t;
}
void find_area(Triangle *t) {
    t->area = (t->base * t->altitude) / 2;
}
void output(Triangle t) {
    printf("The area of triangle is: %f\n", t.area);
}
