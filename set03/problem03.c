// 3. Write a program to check if the given number is prime

// ***Function Declarations***
// ```c
// int input_number();
// int is_prime(int n);
// void output(int n, int result);
// ```

// ***Input***
// ```
// 3
// ```

// ***Output***
// ```
// 3 is a prime number

#include<stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main(){
    int n;
    int result;
    n=input_number();
    result=is_prime(n);
    output(n,result);
    return 0;

}

int input_number(){
    int x;
    printf("Enter the number to check whether it is prime or not");
    scanf("%d",&x);
    return x;
}

int is_prime(int n){
    int result;
     if(n%2==0){
        return 1;
     }else{
        return 0;
     }

}

void output(int n,int result){
       if(is_prime){
        printf(" The number %d  is prime ",n);
       }else{
        printf(" %d The number is not prime",n);
       }

}
