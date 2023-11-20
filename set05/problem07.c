// 7.  Write a program to find out if the name of the camel is a nice name.

// > A camel has a nice name if it has at least 2 vowels and 2 consonants in it

// ***Function Declarations***
// ```c
// void input(char *name);
// int has_nice_name(char *c);
// void output(int res);
// ```

// ***Input***
// ```
// Conky
// ```

// ***Output***
// ```
// The camel does not have a nice name
// ```

#include<stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main(){
    char name[30];
    int res;
    input(&name);
    res=has_nice_name(name);
    output(res);
    }

void input(char *name){
    printf("enter the camel name");
    scanf("%s",&name);
}

  int isVowel(char c) {
   c = tolower(c); 
   return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int has_nice_name(char *name) {
   int vowels = 0, consonants = 0;
   for (int i = 0; name[i] != '\0'; i++) {
       if (isVowel(name[i])) {
           vowels++;
       } else if (isalpha(name[i])) {
           consonants++;
       }
   }
   return (vowels >= 2 && consonants >= 2);
}


 void output(int res) {
   if (res) {
       printf("The name of the camel you entered has a nice name.\n");
   } else {
       printf("The name of the  camel you have entered  does not have a nice name.\n");
   }
}

