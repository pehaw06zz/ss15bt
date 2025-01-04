#include<stdio.h>
#include<string.h>
void xoachu(char str[],char ch){
	int i,j=0;
	int len=strlen(str);
	char tam[len];
	for( int i=0;i<len;i++){
		if(str[i] !=ch){
			tam[j++]=str[i];
		}
	}
	tam[j]='\0';
	strcpy(str,tam);
	
}
int main(){
 char str[100]="Hello World";
 char ch;
 printf("chuoi ban dau: %s\n",str);
 printf("nhap kt tu can xoa: ");
 scanf("%c",&ch);
 xoachu(str,ch);
 printf("'%c': %s\n",ch,str);
 return 0;
 
 
}
