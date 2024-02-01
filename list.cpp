#include<stdio.h>
	int a[20],n=10,ch=0;
void display(){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int begin(){
	a[n]=0;
	for(int i=n-1;i>=0;i--){
		a[i+1]=a[i];
	}
	printf("Enter the element : ");
	scanf("%d",&a[0]);
	n++;
	display();
}
int middle(){
	a[n]=0;
	printf("Enter position :");
	int p;
	scanf("%d",&p);
	for(int i=n-1;i>=p;i--){
		a[i+1]=a[i];
	}
	printf("Enter the element : ");
	scanf("%d",&a[p]);
	n++;
	display();
	
}
int main(){

	printf("Enter 10 elements : ");
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("1.Insert at beginning \n2.Insert at middle\n3.insert at end\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			begin();
			break;
		case 2:
			middle();
			break;
		case 3:
			printf("Enter the element : ");
			scanf("%d",&a[n++]);
			display();
			break;
	}
}
