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

struct camel
{
  float radius, height, length,weight;
};
typedef struct camel Camel;

Camel input(){
    struct camel Camel ;
    

}