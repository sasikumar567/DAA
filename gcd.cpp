#include<stdio.h>
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
int main(){
	int a,b;
	printf("Enter two numbers :\n");
	scanf("%d %d",&a,&b);
	int x=gcd(a,b);
	printf("GCD : %d",x);
}
