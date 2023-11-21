// Program to reverse a string 
#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str,char *str_rev);
void output(char *a,char *reverse_a);
int main() {
    char z[50];
    char y[50];
    input_string(z);
    str_reverse(z, y);
    output(z, y);
    return 0;
}
void input_string(char *a) {
    printf("Enter a string: ");
    gets(a);  
}
void str_reverse(char *str, char *str_rev) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    
    for (int i = 0; i < length; i++) {
        str_rev[i] = str[length - 1 - i];
    }
    str_rev[length] = '\0';  
}
void output(char *a, char *reverse_a) {
    printf(" The original string you entered: %s\n", a);
    printf(" The string when reversed : %s\n", reverse_a);
}



