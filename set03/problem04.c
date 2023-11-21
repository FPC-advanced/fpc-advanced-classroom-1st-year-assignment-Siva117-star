// 4. Write a program to find nth number in fibonacci sequence.

// > Fibonacci Sequence is of the form: `0, 1, 1, 2, 3, 5, 8, 13, ...`

// ***Function Declarations***
// ```c
// int input();
// int find_fibo(int n);
// void output(int n, int fibo);
// ```

// ***Input***
// ```
// 5
// ```

// ***Output***
// ```
// fibo(5) = 5

#include<stdio.h>

int input();
int find_fibo(int n);
void output(int n,int fibo);


int main(){
    int n;
    int fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    }
int input(){
    int x;
    printf("Enter the n th term in Fibonacci series");
    scanf("%d",&x);
    return x;
}
int find_fibo(int n){
    int fibo;
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
    }

void output(int n,int fibo){
    printf("The nth term of %d fibonacci series is %d",n,fibo);
}
    
