// 8.  Write program to find the weight of a truck load of n camels.

// Take inputs for:
// - truck weight
// - height, radius and length of n different camels

// > `total_truck_weight = truck_weight + weight_of_camels`

// ***Function Declarations***
// ```c
// typedef struct _camel {
//     float radius, height, length, weight;
// } Camel;

// void input(int n, Camel c[n], float *truck_weight);
// void find_camel_weight(int n, Camel c[n]);
// float compute_total_weight(int n, Camel c[n], float truck_weight);
// void output(float total_weight);
// ```

// ***Input***
// ```
// Enter the number of camels:
// 3
// Enter the height of camel no. 1:
// 1
// Enter the length of camel no. 1:
// 1
// Enter the radius of camel no. 1:
// 1
// Enter the height of camel no. 2:
// 1
// Enter the length of camel no. 2:
// 1
// Enter the radius of camel no. 2:
// 1
// Enter the height of camel no. 3:
// 1
// Enter the length of camel no. 3:
// 1
// Enter the radius of camel no. 3:
// 1
// Enter the weight of the truck:
// 2000
// ```

// ***Output***
// ```
// The Total weight of the truck is: 2009.424561

#include <stdio.h>
#include <math.h>
typedef struct _camel
{
    float radius, height, length, weight;
} Camel;

void input(int *n, Camel c[], float *truck_weight);
void find_camel_weight(int n, Camel c[]);
float compute_total_weight(int n, Camel c[], float truck_weight);
void output(float total_weight);
int main()
{
    int n;
    Camel c[100];
    float truck_weight, total_weight;
    input(&n, c, &truck_weight);
    find_camel_weight(n, c);
    total_weight = compute_total_weight(n, c, truck_weight);
    output(total_weight);
    return 0;
}
void input(int *n, Camel c[], float *truck_weight)
{
    printf("Enter the number of camels:\n");
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        printf("Enter the height of camel no %d:\n", i + 1);
        scanf("%f", &c[i].height);
        printf("Enter the length of camel no %d:\n", i + 1);
        scanf("%f", &c[i].length);
        printf("Enter the radius of camel no %d:\n", i + 1);
        scanf("%f", &c[i].radius);
    }
    printf("Enter the weight of the truck:\n");
    scanf("%f", truck_weight);
}
void find_camel_weight(int n, Camel c[])
{
    float pi = 3.142;
    for (int i = 0; i < n; i++)
    {
        c[i].weight = pi * c[i].radius * c[i].radius * c[i].radius * sqrt(c[i].height * c[i].length);
    }
}
float compute_total_weight(int n, Camel c[], float truck_weight)
{
    float total_weight = truck_weight;
    for (int i = 0; i < n; i++)
    {
        total_weight += c[i].weight;
    }
    return total_weight;
}
void output(float total_weight)
{
    printf("The Total weight of the truck is: %f\n", total_weight);
}