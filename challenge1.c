#include<stdio.h>

int main(){

    char word[50] ;
    printf("saisir une chaine de charactere : ");

    fgets(word,sizeof(word),stdin);

    printf("ton chaine de charactere est : %s ",word);

    return 0;
}
