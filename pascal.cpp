#include<stdio.h>
void triangle(int a,int n){

		if(a<=n){
		for(int j=0;j<=n-a;j++){
			printf(" ");
		}
		int x=1;
		for(int k=1;k<=a;k++){
			printf("%d ",x);
			x= x*(a-k)/k; 
		}
		printf("\n");
		return triangle(a+1,n);
	}}
int main(){
	int n;
	printf("Enter N: ");
	scanf("%d",&n);
	triangle(0,n);
	
	
}

  
