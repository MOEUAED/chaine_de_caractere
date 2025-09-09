#include <stdio.h>
#include <string.h>

int main() {
    char word[50];
    int i = 0,  j;
    char a;

    printf("Entrez une chaîne : ");
    fgets(word, sizeof(word), stdin);

    word[strcspn(word, "\n")] = '\0';

    j = strlen(word)-1;

    while (i < j) {
        a = word[i];
        word[i] = word[j];
        word[j] = a;
        i++;
        j--;
    }

    printf("Chaine inversee : %s\n", word);

    return 0;
}
