#include<stdio.h>
int k;
int search(int a[],int l,int r){
	if(l<=r){
	int m=(l+r)/2;
	if(a[m]==k){
		return m;
	}
	if(a[m]>k){
		return search(a,l,m-1);
	}
	if(a[m]<k){
		return search(a,m+1,r);
	}}
	else{
		return -1;
	}
}
void sort(int arr[], int n) 
{  
    if (n <= 1) 
        return; 
    sort(arr, n - 1); 
    int last = arr[n - 1]; 
    int j = n - 2; 
    while (j >= 0 && arr[j] > last) { 
        arr[j + 1] = arr[j]; 
        j--; 
    } 
    arr[j + 1] = last; 
} 
int main(){
	int a[20],l;
	printf("Enter No of elements : ");
	scanf("%d",&l);
	printf("Enter elements : ");
	for(int i=0;i<l;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter Target : ");
	scanf("%d",&k);
	sort(a,l);
	int x=search(a,0,l-1);
	printf("Index of %d : %d ",k,x);
	
	
}
	
