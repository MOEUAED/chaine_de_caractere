#include<stdio.h>
#include<string.h>
int main (){
	
	char str[100] , a ;
	int i , c ;
	
	printf("entrer une chaine de caractere : ");
	fgets(str, sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	
	printf("Entrer le caractere a rechercher : ");
    scanf("%c", &c);
	
	for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            a++;
        }
    }
	
	 printf("Le caractere '%c' apparait %d fois dans la chaine.\n", c, a);
	
	return 0 ;
}
