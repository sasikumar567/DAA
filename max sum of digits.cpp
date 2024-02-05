#include<stdio.h>
int sum(int d,int n){
	if(n>0){
		int r=n%10;
		d=d+r;
		return sum(d,n/10);
	}
	return d;
}
int main(){
	int a[20],l,b[20];
	printf("Enter No of elements : ");
	scanf("%d",&l);
	printf("Enter elements : ");
	for(int i=0;i<l;i++){
		scanf("%d",&a[i]);
		b[i]=sum(0,a[i]);
	}
	
	int c=0;
	for(int i=0;i<l;i++){
		for(int j=i+1;j<l;j++){
			if(b[i]==b[j]){
				if((a[i]+a[j])>c){
				c=a[i]+a[j];
				
				printf("%d ",c);}
			}
			}
		}
	}

