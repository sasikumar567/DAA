#include<stdio.h>
int main(){
	int a[20],l,k;
	printf("Enter No of elements : ");
	scanf("%d",&l);
	printf("Enter elements : ");
	for(int i=0;i<l;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter Target : ");
	scanf("%d",&k);
	for(int i=0;i<l;i++){
		if(a[i]==k){
			printf("Index of %d : %d",k,i);
		}
	}
}
