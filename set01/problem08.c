#include <stdio.h>
int get_array_size();
void get_array_values(int n, int a[n]);
int find_sum_array(int n, int a[n], int sum);
void output(int n, int a[n], int sum);
int main()
{
    int n,sum=0;
    n=get_array_size();
    int a[n];
    get_array_values(n,a);
    sum=find_sum_array(n,a,sum);
    output(n,a,sum);
    return 0;

}
int get_array_size() 
{
    int n;
    printf("Enter the size of the array:\n" ,n);
    scanf("%d", &n);
    return n;
}
void get_array_values(int n, int a[n]) 
{
    printf("Enter %d values for the array:\n");
    int i=0;
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
}
int find_sum_array(int n, int a[n], int sum)
{  
    int i=0;
    for (int i = 0; i <=n; i++) 
    {
        sum =sum+ a[i];
    }
    return sum;
}
void output(int n, int a[n], int sum)
{
    int i;
    for (int i = 0; i<n; i++) 
    {
    printf("%d+",a[i]);
    }
    printf("the sum is %2d",sum);
}