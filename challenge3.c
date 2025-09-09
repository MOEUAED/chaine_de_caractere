#include<stdio.h>
#include<string.h>
int main(){
    char word1[50], word2[50];

    printf("entrer la premier mots : ");
    fgets(word1, sizeof(word1),stdin);

    word1[strcspn(word1, "\n")] = '\0' ;

    printf("entrer la deuxieme mots : ");
    fgets(word2, sizeof(word2),stdin);

    word2[strcspn(word2, "\n")] = '\0' ;

    strcat(word1 , " ");
    strcat(word1 , word2);
    printf("chaine de caractere finale est : %s",word1);

    return 0 ;
}
