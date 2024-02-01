#include<stdio.h>
#include<string.h>
int main(){
	char s[20],r[20];
	printf("Enter String: ");
	scanf("%s",s);
	int x=0;
	for(int i=strlen(s)-1;i>=0;i--){
		r[x++]=s[i];
	}
	printf("Reverse of the string : %s",r);

}
