// 3.  Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*

// > `weight = pi * stomach_radius^3 * sqrt(height * length)`

// ***Function Declarations***
// ```c
// struct camel {
// 	float radius, height, length,weight;
// };

// typedef struct camel Camel;

// Camel input();
// float find_weight(Camel c);  //pass by value
// //or
// void find_weight(Camel *c); //passing address variable
// void output(Camel c);
#include<stdio.h>
#include<math.h>
struct camel
{
  float radius, height, length,weight;
};
typedef struct camel Camel;

int main(){
    Camel c;
    Camel c=input();
    find_weight(c);
    output(c);
    return 0;
    
}
Camel input(){
    
    Camel c;
    printf("Enter the radius of camel");
    scanf("%f",&c.radius);
    printf("Enter the Height of camel");
    scanf("%f",&c.height);
    printf("Enter the Lenght of camel");
    scanf("%f",&c.length);
    return c;
}
float find_weight(Camel c){
    c.weight=3.14 * c.radius*c.radius*c.radius*sqrt(c.height*c.length);
    
}

void output(Camel c){
    printf("The weight of the camel is %f",c.weight);
}
