#include<Stdio.h>
int main(){
	int n,t,r=0;
	printf("Enter N : ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		int d=n%10;
		r=r*10+d;
		n/=10;
	}
	if(t==r){
		printf("Palindrome");
	}
	else{
		printf("not a palindrome");
	}
}
