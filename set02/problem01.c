#include<stdio.h>
void input(float *base, float *height);
void tria_area(float base , float height, float *area);
void output(float base, float height, float area);
int main(){
    float base,height,area;
    input(&base, &height);
    tria_area(base, height, &area);
    output(base, height, area);
    return 0;
}
void input(float *base,float *height){
    printf("Enter the base of the triangle");
    scanf("%f",base);
    printf("Enter the height of the triangle");
    scanf("%f",height);
}
void tria_area(float base , float height, float *area){
    *area= 0.5 * base * height;

}
void output(float base, float height, float area){
    printf("The area of triangle with base = %f and height is %f is %f",base,height,area);
}
