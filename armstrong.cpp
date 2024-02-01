#include<stdio.h>
int d=0;
int sum(int n){
	if(n>0){
		int r=n%10;
		d=d+(r*r*r);
		return sum(n/10);
	}
	return d;
}
int main(){
	int n;
	printf("Enter N : ");
	scanf("%d",&n);
	int x=sum(n);
	printf("%d",x);
	if(x==n){
		printf("\nArmstrong number");
	}
	else{
		printf("\not a Armstrong number");
	}
}
