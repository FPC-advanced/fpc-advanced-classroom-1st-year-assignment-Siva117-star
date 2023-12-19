// 1. Write a function to find if a given number is a factorial number.
//1(0!) and (1!), 2(2!), 6(3!)

#include<stdio.h>
int input();
int factorial_check(int num);
void output(int num);

int main(){
    int num,fact;
    num=input();
    // fact=factorial_check(num);
    output(num);
    fact=factorial_check(num);
 


}
int input(){
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    return x;
}

int factorial_check(int num){
    int facto;
    for (int i = 0; i < num; i++)
    {   
        
        facto=num*i;
        printf("%d ",facto);
    }
    
    

}

void output(int num){
    printf("The Number is %d",num);
}