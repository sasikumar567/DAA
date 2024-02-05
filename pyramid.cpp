#include<stdio.h>
int main(){
	int n;
	printf("Enter N : ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		for(int k=0;k<n-i;k++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
