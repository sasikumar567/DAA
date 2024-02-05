#include<stdio.h>
void print(int a[],int n,int s[],int size,int in){
	if(in==n){
		printf("{");
		for(int i=0;i<size;i++){
			printf("%d",s[i]);
		}
		printf("}\n");
	
	return;}
	s[size]=a[in];
	print(a,n,s,size+1,in+1);
	print(a,n,s,size,in+1);
}
void generate(int a[],int n){
	int s[n];
	print(a,n,s,0,0);
}
int main(){
	int n,a[20];
	printf("Enter N: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("All possible subsets :\n");
	generate(a,n);
}
