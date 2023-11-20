// Write a program to add two fractions

// ***Function Declarations***
// ```c
// typedef struct {
//     int num, den;
// } Fraction;

// Fraction input_fraction();
// int find_gcd(int a, int b);
// Fraction add_fractions(Fraction f1, Fraction f2)
// void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
// ```

// ***Input***
// ```
// 9 6
// 5 6
// ```

// ***Output***
// ```
// 9/6 + 5/6 = 7/3
// ```

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main(){
  
  Fraction f1, f2, sum;
  printf("Enter the first fraction:\n");
  f1 = input_fraction();
  printf("Enter the second fraction:\n");
  f2 = input_fraction();
  sum = add_fractions(f1, f2);
  output(f1,f2,sum);
  return 0;
}
Fraction input_fraction(){
    Fraction f;
   printf("Enter the numerator: ");
   scanf("%d", &f.num);
   printf("Enter the denominator: ");
   scanf("%d", &f.den);
   return f;
}
int find_gcd(int a, int b){
    
if (a == 0) {
       return b; 
   return find_gcd(b%a, a); 
}

}
Fraction add_fractions(Fraction f1, Fraction f2){
    Fraction sum;
   int lcm = (f1.den * f2.den) / find_gcd(f1.den, f2.den);
   sum.num = (f1.num * (lcm / f1.den)) + (f2.num * (lcm / f2.den));
   sum.den = lcm;
   simplify(&sum);
   return sum;
}
void output(Fraction f1, Fraction f2, Fraction sum){
    printf("%d/%d + %d/%d = %d/%d\n", f1.num, f1.den, f2.num, f2.den, sum.num, sum.den);
}