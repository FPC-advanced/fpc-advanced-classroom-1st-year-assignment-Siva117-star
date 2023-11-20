
// 1. Write a program to find sum of two fractions

// ***Function Declarations***
// ```c
// void input(int *num1, int *den1, int *num2, int *den2);
// void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
// void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
// ```

// ***Input***
// ```
// 1 4
// 1 2
// ```

// ***Output***
// ```
// 1/2 + 1/4 = 3/4


#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2);

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);

void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main(){
    int num1,num2,den1,den2;
    int res_num,res_den;
    
    input(&num1,&den1,&num2,&den2);
    add(num1,num2,den1,den2,&res_num,&res_den);
    output(num1,num2,den1,den2, res_num,res_den);


}
void input(int *num1, int *den1, int *num2, int *den2){
   printf("Enter Num 1 \n");
    scanf("%d", num1);
    printf("Enter d1 \n");
    scanf("%d", den1);
    
    printf("Enter Num2  \n");
    scanf("%d", num2);
    printf("enter d2 \n");
    scanf("%d", den2);
    
    
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    int a;
    int b,c,d;
    
    a=den2*den1;
    *res_den=(a*2);
    
    *res_num=((den2*num1)+(den1*num2));
    
    

}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
printf("The sum of fractions are  =%d /%d", res_num, res_den);
        
    
}
