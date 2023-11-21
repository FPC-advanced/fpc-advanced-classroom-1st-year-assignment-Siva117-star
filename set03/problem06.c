// 6. Write a program to find the index of a substring of a string

// ***Function Declarations***
// ```c
// void input_string(char* a, char* b);
// int sub_str_index(char* string, char* substring);
// void output(char *string, char *substring, int index);
// ```

// ***Input***
// ```
// helloworldhello
// world
// ```

// ***Output***
// ```
// The index of 'world' in 'helloworldhello' is 5


#include<stdio.h>
void input_string(char* a, char* b);
 int sub_str_index(char* string, char* substring);
 void output(char *string, char *substring, int index);

    int main() {
    char a[100], b[100];
    
    int i;

    input_string(a, b);
    i = sub_str_index(a, b);
    output(a,b,i);
    return 0;


    
}
void input_string(char *a,char *b) {
    printf("Enter 1 string: ");
    gets(a);  
    printf("Enter 2 string: ");
    gets(b);
}
int sub_str_index(char* string, char* substring){


    int M = strlen(string);
    int N = strlen(substring);
 
    
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        for (j = 0; j < M; j++)
            if (substring[i + j] != string[j])
                break;
 
        if (j == M)
            return i;
    }
}
void output( char *string,char *substring ,int i){
    printf("The  index of %s in %s is %d",substring,string,i);
}













