#include<stdio.h>
int p1=0,p2=1;
void fib(int n){
	if(n<0){
		return;
	}
	int p=p1+p2;
	p1=p2;
	p2=p;
	printf("%d ",p);
	fib(n-1);
}
int main(){
	int n;
	printf("Enter N : ");
	scanf("%d",&n);
	printf("%d %d ",p1,p2);
	fib(n-2);
}
