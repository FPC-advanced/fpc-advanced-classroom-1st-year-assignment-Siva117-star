#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int sca);
int main(){
    int a,b,c;
    int sca;
    a=input_side();
    b=input_side();
    c=input_side();
    sca=check_scalene(a,b,c);
    output(a,b,c,sca);
    return 0;
}
int input_side(){
    int a,b,c;
    printf("Enter one side");
    scanf("%d",&a);
    return a;
    
    printf("Enter two side ");
    scanf("%d",&b);
    return b;
    
    printf("Enter third side ");
    scanf("%d",&c);
    return c;

}
int check_scalene(int a, int b, int c){
    int sca;
    if(a!=b&&a!=c&&b!=c){
        return 1;
    }
    else{
        return 0;
    }
}
void output(int a, int b, int c, int sca){
    printf("The sides %d ,%d,%d  is =",a,b,c);
    if(sca){
        printf("it is scalene");
    }else{
         printf("not scalene");
         }
}
