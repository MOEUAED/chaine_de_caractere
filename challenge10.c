#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char word[100];
    printf("entrer votre chaine de caracteres :\n ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    printf("donner votre sous chaine :\n");
    fgets(word,sizeof(word),stdin);
    word[strcspn(word,"\n")]='\0';


    if (strstr(str, word) != NULL) {
        printf("Sous chaine trouvee .\n");
    } else {
        printf("Sous chaine non trouvee .\n");
    }

    return 0;
}
