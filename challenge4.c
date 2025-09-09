#include <stdio.h>
#include <string.h>

int main() {
    char word1[50], word2[50];

    printf("Entrer le premier mot : ");
    fgets(word1, sizeof(word1), stdin);
    word1[strcspn(word1, "\n")] = '\0';

    printf("Entrer le deuxième mot : ");
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = '\0';

    if (strcmp(word1, word2) == 0) {
        printf("Les chaines sont egales.\n");
    } else {
        printf("Les chaines sont differentes.\n");
    }

    return 0;
}
