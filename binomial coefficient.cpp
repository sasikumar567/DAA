#include<stdio.h>
int binco(int n,int r){
	if(n<r){
		return 0;
	}
	if(n==r || r==0){
		return 1;
	}
	  return binco(n-1,r-1)+binco(n-1,r);
	
}
int main(){
	int n,r;
	printf("Enter N :");
	scanf("%d",&n);
	printf("Enter r :");
	scanf("%d",&r);
	int x=binco(n,r);
	printf("Binomial coefficient %dC%d : %d",n,r,x);
}
