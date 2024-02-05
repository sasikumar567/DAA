#include<stdio.h>
void sort(float p[],float w[],float x[]){
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(w[i]<w[j]){
				float t=w[i];
				w[i]=w[j];
				w[j]=t;
				t=p[i];
				p[i]=p[j];
				p[j]=t;
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}	
}
void display(float a[]){
	for(int i=0;i<4;i++){
		printf("%f ",a[i]);
	}
	
}
int main(){
	float w[4],p[4];
	float x[4];
	int n;
	printf("Enter Maximum Weight : ");
	scanf("%d",&n);
	printf("Enter Profit values : \n");
	for(int i=0;i<4;i++){
		scanf("%f",&p[i]);
		x[i]=0;
	}
	printf("Enter Weight values : \n");
	for(int i=0;i<4;i++){
		scanf("%f",&w[i]);
	}
	sort(p,w,x);
	printf("\nProfit : ");
	display(p);
	printf("\nWeight : ");
	display(w);
	printf("\n");
	for(int i=0;i<4;i++){
		x[i]=p[i]/w[i];
		printf("%.2f ",x[i]);
	}
	printf("\n\n");
	for(int i=0;i<4;i++){
		
	}
	sort(w,x,p);
	printf("\n(x1,x2,x3,x4) : ");
	display(x);
	int r=n;
	for(int i=0;i<4;i++){
		if(r>=w[i]){
		r=n-w[i];
		printf("\nFor Object place %d : P= %d  w=%d Remaining %d-%d=%d",i+1,p[i],w[i],r,w[i],r);
		x[i]=1;}
		else if(r==0){
			x[i]=0;
		}
		else if(r<w[i]){
			x[i]=r/w[i];
		}
	}
	printf("\n\n");
	display(x);
	
}
