/*
int input();
int factorial_check(int num);
void output(int num,int fact);
*/
#include<stdio.h>
int input();
int factorial_check(int num);
void output(int num,int fact);

int main(){
    int num,fact;
    num=input();
    fact=factorial_check(num);
    output(num,fact);
    return 0;
}
int input(){
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    return x;
}

int factorial_check(int num){
    int a,i;
    
    
    if (num%1==0)
    {
       return 1;
    }
    else {
        return 2;
    }

    
    

}

void output(int num,int fact){
    if (factorial_check( num)==1)
    {
        printf("It is a factorial");

    }
    else if(factorial_check( num)==2){
        printf("It is  not a factorial");
    
}
}

