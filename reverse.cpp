#include<stdio.h>
int d=0;
int rev(int n){
	if(n>0){
		int r=n%10;
		d=d*10+r;
		rev(n/10);
	}
	return d;
}
int main(){
	int n;
	printf("Enter N :");
	scanf("%d",&n);
	int   x=rev(n);
	printf("Reverse of %d : %d",n,x);
}
