#include<stdio.h>
#include<string.h>

    int mystrlen(char word[]){
        int i = 0;
        while (word [i]!= '\0'){
            i++;
        }
    return i;
    }


    int main (){
        char word[50];
            printf("siaisr une chaine de caractere a afficher :\n");
    fgets(word,sizeof(word),stdin);

    int i = mystrlen(word);
    if (i > 0 && word[i-1]=='\n'){
        word[i -1]= '\0';
        i--;
    }
    printf("longeur : %d\n",i);
return 0;
    }
