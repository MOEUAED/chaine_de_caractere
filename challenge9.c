#include<stdio.h>
#include<string.h>

int main (){
	
	char str[50] ,str_es[50];
	int i , j =0;
	printf("entrer une chaie de caractere : ");
	
	fgets(str, sizeof(str), stdin);
	
	str[strcspn(str , "\n")]= '\0';
	for (i=0;i<strlen(str);i++){
		
		if(str[i]!= ' '){
			str_es[j]=str[i];
			j++;
		}
		
	}
	
	printf("votre de chaine de caractere est  %s",str_es);
	
	return 0;
}
