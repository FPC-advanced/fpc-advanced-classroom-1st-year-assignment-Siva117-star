// 2. Write a program to find the smallest of three fractions

// ***Function Declarations***
// ```c
// typedef struct {
//     int num, den;
// } Fraction;
// ```

// ***Input***
// ```
// 1 2
// 1 3
// 1 4
// ```

// ***Output***
// ```
// The smallest of 1/2, 1/3 and 1/4 is 1/4
// ```
#include<stdio.h>

typedef struct {
    float num,den;
} fraction;

void input(fraction *fr1 , fraction *fr2 ,fraction *fr3);
void comp(fraction fr1 , fraction fr2 ,fraction fr3,int *res_num, int *res_den);
void output(fraction fr1 , fraction fr2 ,fraction fr3,int res_num, int res_den);


int main(){
    fraction fr1,fr2,fr3;
    int res_num,res_den;
    input(&fr1,&fr2,&fr3);
    comp(fr1,fr2,fr3,&res_num,&res_den);
    output(fr1,fr2,fr3,res_num,res_den);
    return 0;
}

void input(fraction *fr1 , fraction *fr2 ,fraction *fr3)
{

    printf("Enter the second fraction \n");
    scanf("%f %f ",&fr2->num,&fr2->den);
    printf("Enter the third fraction \n");
    scanf("%f %f ",&fr3->num,&fr3->den);
    printf("enter the third fraction");
    scanf("%f %f",&fr1->num,&fr1->den);

}
void comp(fraction fr1 , fraction fr2 ,fraction fr3,int *res_num, int *res_den)
{
    if(fr1.num/fr1.den<=fr2.num/fr2.den&&fr1.num/fr1.den<=fr3.num/fr3.den)
    {
        *res_num=fr1.num;
        *res_den=fr2.den;
    }else if (fr2.num/fr2.den<=fr1.num/fr1.den&&fr2.num/fr2.den<=fr3.num/fr3.den)
    {
        *res_num=fr2.num;
        *res_den=fr2.den;
    }else 
    {
        *res_num=fr3.num;
        *res_den=fr3.den;
    }
    
}

void output(fraction fr1 , fraction fr2 ,fraction fr3,int res_num, int res_den)
{
    printf("The smallest fraction  %d %d",res_num,res_den);
}


