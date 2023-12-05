#include<stdio.h>
void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);


void  input_two_strings(char *string1,char *string2){

    printf("enter the 1st word ");
    scanf("%s",string1);
    printf("enter the 2st word ");
    scanf("%s",string2);
}
int stringcompare(char *string1,char *string2)
{
    int i;
    int result;
    for(i=0;string1[i]!='\0'&&string2[i]!='\0'&&string2[i]==string1[i];i++);
    return string1[i]-string2[i];
    }
    
void output(char *string1, char *string2, int result){ 
    
    if (result>0)
    {
        printf(" %s is greater ",string1);
    }
    else if(result<0){
        printf(" %s is greater ",string2);
    }
    else {
        printf("Both strings are equal");
    }
    
    
}
int main(){
    char string1[100],string2[100];
    int result;
    input_two_strings(string1,string2);
    result = stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;

}