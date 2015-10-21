#include<stdio.h>
#include<string.h>

int compseq(char s[]);

int compseq(char s[]){
	int i=0;
	char *p=s;	
	//while(s[i]!='\0')
	//	i++;
	while(*p !='\0'){
	i++;
	p++;
	}	
	return 1;
}
int main(){
	char texto[]="faculdade de informatica";
	
	printf( "%zu\n", strlen(texto));	
	printf( "%i\n", compseq(texto));	

	return 0;
}
