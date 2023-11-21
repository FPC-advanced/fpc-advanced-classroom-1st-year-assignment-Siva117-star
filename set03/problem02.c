// 2. Write a program to find whether the given 3 points form a triangle

// ***Function Declarations***
// ```c
// void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
// int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
// void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
// ```

// ***Input***
// ```
// 1 1
// 0 0
// 1 1
// ```

// ***Output***
// ```
// The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle

#include<stdio.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main(){
    float  x1, y1, x2, y2, x3, y3;
    float result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);

}

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
   printf("Enter coordinates for point 1 (x1 y1): ");
    scanf("%f %f", x1, y1);
    printf("Enter coordinates for point 2 (x2 y2): ");
    scanf("%f %f", x2, y2);
    printf("Enter coordinates for point 3(x3 y3): ");
    scanf("%f %f", x3, y3);
    
}


int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
     float result;
    
    result = x1 * (y2 - y3) - y1 * (x2 - x3) + x2 * y3 - y2 * x3;

    if(result !=0){
        return 1;
    }else{
        return 0;
    }

      


}

void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){

    if(is_triangle){
        printf("The point x1,y1 and x2y2 and x3y3 do not form a triangle %f %f %f %f %f %f %f",x1,y1,x2,y2,x3,y3,result);
        
    }else{
        printf("Does not form a triangle");
    }
}