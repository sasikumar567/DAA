#include<stdio.h>
#include<string.h>
void integer(){
	int n,d=0;
	printf("Enter N: ");
	scanf("%d",&n);
	int t=n;
	while(n>0){
		int r=n%10;
		d=d*10+r;
		n/=10;
	}
	if(n==t){
		printf("Palindrome");
	}
	..
	else{
		printf("Not a Palindrome");
	}
}
void string(){
	char s[20],r[20];
	printf("Enter String: ");
	scanf("%s",s);
	int x=0;
	for(int i=strlen(s)-1;i>=0;i--){
		r[x++]=s[i];
	}
	if(strcmp(s,r)){
		printf("not Palindrome");
	}
	else{
		printf("Palindrome");
	}
	
}
int main(){
	int ch;
	printf("1.Integer\n2.String\nEnter your choice : ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			integer();
			break;
		case 2:
			string();
			break;
	}
}
