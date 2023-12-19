#include<stdio.h>
int enter_arraysize(int n);
void input_array_elements(int n,int arr[n]);
void factorial(int n,int arr[n],int result[]);
void output(int num,int result[]);

int main(){
    int n;
    int result[20];
    n=enter_arraysize(n);
    int a[n];
    a[n]=input_array_elements(n,a);
    result[20]=factorial();
    output(num,result[20]);
}
int enter_arraysize(int n){
printf("Enter the array size");
scanf("%d",&n);
return n;
}

void input_array_elements(int n,int arr[n]){
  printf("Enter the array elements");
   for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    
     }
 }

void factorial(int n,int arr[n],int result[]){
     if (arr[n]%1==0)
    {
       result[20]=arr[n];
    }
    else {
        return 2;
    }

}

void output(int num,int result[]){
    printf("The numbers of are",num,result[20]);

}