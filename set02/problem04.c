
#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){

    
    int n;
    
    n=input_array_size();
    int a[n];
    input_array(n,a);
    int sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;


}


int input_array_size(){
    int x;
    printf("Enter the array size");
    scanf("%d",&x);
    return x;



}

void input_array(int n, int a[n]){
    printf("Enter the array values");
    int i=0;
    for ( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
}


int sum_composite_numbers(int n, int a[n]){
    int sum=0;
        for (int i = 0; i < n; i++)
        {
            for (int j=2;j<a[i];j++)
            {
                if(a[i]%j == 0){
                    sum+=a[i];
                    break;
                }
                
            }
            
        }
        return sum;
}
        
        
    void output(int sum){
     printf("The output is %d",sum);
       
         
    }
