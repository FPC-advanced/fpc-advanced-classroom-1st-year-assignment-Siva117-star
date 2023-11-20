#include <stdio.h> 
int input();
int find_sum(int n, int sum);
void output (int sum);
int main() 
{
    int i=0, sum=0, n=0;
    n = input();
    sum = find_sum(n,sum);
    output(sum);
    return 0;
}
int input() 
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    return n;
}
int find_sum(int n, int sum) 
{
    
    for (int i = 1; i <= n; i++) 
    {
      sum= sum+i;
    }
    return sum; 
}
void output(int sum) 
{
    printf("Sum is %d",sum);
}

