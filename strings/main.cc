#include <iostream>
#include <string.h>

int main(int argc, char const *argv[])
{
    /* code */
    // c style string
    char name[10] = {'J', 'A', 'T', 'I', 'N'};
    for(int i=0; name[i]!='\0'; i++){
        printf("%c ", name[i]);
    }
    printf("\n");
    int stringLenght = strlen(name);
    printf("ASCII values of character stored in the name array\n");
    printf("(");
    for(int i=0; i<stringLenght; i++){
        printf("%d ", name[i]);
    }
    printf(")");
    return 0;
}
