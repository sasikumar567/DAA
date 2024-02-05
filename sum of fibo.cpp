#include<stdio.h>
int fib(int a[],int n){
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=2*n;i++){
		a[i]=a[i-1]+a[i-2];
	}
}
int main(){
	int n,a[20],s=0;
	printf("Enter N : ");
	scanf("%d",&n);
	fib(a,n);
	for(int i=0;i<=2*n;i=i+2){
		printf("%d ",a[i]);
		s=s+a[i];
	}
	printf("\nSum of even indexes : %d",s);
} 
