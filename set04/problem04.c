// 4. Write a program to evaluate a polynomial at a given point using [Horner's Method](https://en.wikipedia.org/wiki/Horner%27s_method#:~:text=Alternatively%2C%20Horner's%20method%20also%20refers,into%20general%20use%20around%201970.)

// ***Function Declarations***
// ```c
// int input_degree();
// void input_coefficients(int n, float a[n]);
// float input_x();
// float evaluate_polynomial(int n, float a[n], float x);
// void output(int n, float a[n], float x, float result);
// ```

// ***Input***
// ```
// 1
// 1 1
// 1
// ```

// ***Output***
// ```
// H(1, 1, 1) = 1.00 + 1.00 * 1.00^1 = 2.0000000

#include<stdio.h>


int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main(){
    int n,i;
    float a[n],x,result;
    n=input_degree();
    input_coefficients(n,a);
    x=input_x();
    result=evaluate_polynomial( n,a,x);
    output(n,a,x,result);
    return 0;
}

int input_degree(){
    int d;
    printf("Input degree \n");
    scanf("%d",&d);
    return d;

}

void input_coefficients(int n, float a[n]){
    printf("Input cooefficient \n");
    
     for (int i = 0; i < 2; i++)
     {
        scanf("%f",&a[i]);
     }
    //  return a[n]; // this change is been made
     
    
 }

 float input_x(){
    float x;
    printf("Input x \n");
    scanf("%f",&x);
    return x;
 }

 float evaluate_polynomial(int n, float a[n], float x){

    float result;
    

     for (int i = 0; i < n; i--)
     {
        // result=n+a[n]*pow(a[n],x);
         result=(n+a[n]*x); 
     }
     return result;
      
 }

void output(int n, float a[n], float x, float result){
    printf("The Result using Horner method is  %f",result);
}
