#include<Stdio.h>
int main(){
	int arr[20],n;
    printf("Enter N: ");
	scanf("%d",&n);
	printf("Enter Elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]<arr[j]){
			int t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	printf("First two minimum elements : %d  %d",arr[0],arr[1]);
}
