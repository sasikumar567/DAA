#include<stdio.h>
int per(int n){
	int d=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			d=d+i;
		}
	}
	return d;
}
int main(){
	int n,a[10];
	printf("Enter N : ");
	scanf("%d",&n);
	int x=0;
	for(int i=2;i<10000;i++){
		if(per(i)==i){
			a[x++]=i;
		}
	}
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}
