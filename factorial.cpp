#include<stdio.h>
int fact(int n){
	if(n==0){
		return 1;
	}
	else{
	return n*fact(n-1);
}
}
int main(){
	int n;
	printf("Enter N : ");
	scanf("%d",&n);
	int x=fact(n);
	printf("factorial : %d",x);
}
