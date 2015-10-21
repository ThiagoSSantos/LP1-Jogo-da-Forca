#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void create(chars[],char w[]);
void clear;

void create(chars[],char w[]) {
  
        int len = strlen (s);
        int j;
        for (j=0;j<len;j++)
        w[j]; = '-';
        w[len] = '\0'       
 }

void clear() {
     // FIXME: deve ficar no início da tela
     //int i;
     //for ( i = 0 ; i < 20 ; i++ )
     // printf("\n");
-
}

{
	char secret[100];
	char word[100];
	unsigned len; 

	printf("informe a palavra secreta");

	scanf("%s", secret);
	
	
	printf("a palavra informada foi[%s]\n",secret);

	len=srtlen(secret);

	printf("a palavra tem %d carcteres.\n",len);
	
	int i,j;
	for(j=0;j<len;j++)
		word[j]='-';
	word[len]='\0';
	
	
	printf("*fim!!*");
	return 	EXIT_SUSSESS;
}
