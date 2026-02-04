// main.c
#include <stdio.h>
#include <string.h>
 
void vulnerable_function(char *input) {
    char buffer[32];
    strcpy(buffer, input);
}
 
int main() {
    char input[100];
    printf("Enter some text: ");
    gets(input);
    vulnerable_function(input);
    printf("Code after the vulnerable function.\n");
    return 0;
}

