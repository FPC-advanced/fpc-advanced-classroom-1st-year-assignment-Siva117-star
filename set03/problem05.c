// 5. Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.

// ***Function Declarations***
// ```c
// int input_array_size();
// void init_array(int n, int a[n];
// void erotosthenes_sieve(int n, int a[n]);
// void output(int n, int a[n]);
// ```

// ***Input***
// ```
// 35
// ```

// ***Output***
// ```
// 2, 3, 7, 11, 13, 19, 23, 29, 31
// ```
// i should do
int input_array_size();
 void init_array(int n, int a[n]);
 void erotosthenes_sieve(int n, int a[n]);
 void output(int n, int a[n]);

int main(){

} 

int input_array_size(){
    int x;
    prinf("Enter the array size %d",&x);
    return x;
}

void init_array(int n, int a[n]){
    printf("Enter the array elements");
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return a[i];
}
void erotosthenes_sieve(int n, int a[n]){
    int p;
}