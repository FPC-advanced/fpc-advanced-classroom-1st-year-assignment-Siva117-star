// 1. Write a function to find if a given number is a factorial number.
//1(0!) and (1!), 2(2!), 6(3!)

#include<stdio.h>
int input();
int factorial_check(int num);
void output(int num,int fact);

int main(){
    int num,fact;
    num=input();
    fact=factorial_check(num);
    output(num);
    
 


}
int input(){
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    return x;
}

int factorial_check(int num){
    int facto;
    if (num%1==0)
    {
        return 0;
    }
    else{
        return 1;
    }
    
    

}

void output(int num,int fact){
    printf("The Number is %d",num);
}