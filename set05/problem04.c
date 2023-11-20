// 4.  Write a program to find out the mood of a Camel.

// Camel is:
//  - sick when its `stomach_radius` is less than `height` and less than `length`
//  - happy when its `height` is less than `length` and less than `stomach_radius`.
//  - tense when its `length` is less than `height` and `stomach_radius`.

// ***Function Declarations***

// ```c
// void input_camel_details(float *radius, float *height, float *length);
// int find_mood(float radius, float height, float length)
// void output(float radius, float height, float length, int mood);
// ```

// ***Input***
// ```
// 5
// 2
// 4
// ```

// ***Output***
// ```
// The Camel is Happy
// ```

#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
    float radius,length,height;
    float mood;
    input_camel_details(&radius,&height,&length);
    mood=find_mood(radius, height, length);
    output(radius, height, length,mood);


}


void input_camel_details(float *radius, float *height, float *length){
      printf("Enter the radius \n");
    scanf("%f", radius);
     printf("Enter the  height \n");
    scanf("%f", height);
     printf("Enter the length \n");
    scanf("%f", length);
}

int find_mood(float radius, float height, float length){
    float happy,sick,tense;
    float mood;
    
    if(radius<height && length)
    {
        mood=1;
        return mood;

    }else if(height<length&&radius)
    {
        mood=2;
        return mood;

    }else if(length<height&&radius)
    {
        mood=3;
        return mood;
    }

}

void output(float radius, float height, float length, int mood){
    
    if(mood==1){
        printf("The camel is sick");
    }
    else if(mood==2)
    {
        printf("The camel is happy");
    }else if(mood==3){
        printf("the camel is tense");

    }
}