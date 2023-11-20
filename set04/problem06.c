// 6. Write a program to count the number of words in a string using strtok (_string.h_)

// ***Function Declarations***
// ```c
// void input_string(char *a);
// int count_words(char *string);
// void output(char *string, int no_words);
// ```

// ***Input***
// ```
// hello world hello
// ```

// ***Output***
// ```
// The number of words in "hello world hello" is 3
// ```

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

#include <stdio.h>
#include <string.h>
int main() {
    char inputString[50]; 
    input_string(inputString);
    int wordCount = count_words(inputString);
    output(inputString, wordCount);

    return 0;
}
void input_string(char *a) {
    printf("Enter a string: ");
    gets(a);
}
int count_words(char *string) {
    int count = 0;
    char *tok = strtok(string, " "); 

    while (tok!= NULL) {
        count++;
        tok = strtok(NULL, " ");
    }
    return count;
}
void output(char *string, int no_words) {
    printf("The number of words in \"%s\" is %d\n", string, no_words);
}










