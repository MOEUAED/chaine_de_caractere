#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    
    printf("Entrer une chaine de caracteres : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Chaine en minuscules : %s\n", str);

    return 0;
}

