// 6.  Write a program to find the average of all the odd elements in an array

// ***Function Declarations***
// ```c
// int input_n();
// void input(int n, int a[n]);
// float odd_average(int n, int a[n]);
// void output(float avg);
// ```

// ***Input***
// ```
// 5
// 5 4 3 8 0
// ```

// ***Output***
// ```
// Average of all the odd elements is: 4

#include<stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);
int main(){

    int n,avg=0;
    n=input_n();
    int a[n];
    input(n,a);
    avg=odd_average(n,a);
    output(avg);
    return 0;
}
int input_n() 
{
    int n;
    printf("Enter the size of the array:\n" ,n);
    scanf("%d", &n);
    return n;
}
void input(int n, int a[n]) 
{
    printf("Enter %d values for the array:\n");
    int i=0;
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
}
 float odd_average(int n, int a[n]){
    int sum = 0;
    int odd;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            sum += a[i];
            odd++;
        }
    }
    return (float)sum/odd;
}
void output(float avg){
    printf("the avg of all  odd  numbers in array is %f",avg);
}

    
    
     
    
