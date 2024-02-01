#include<stdio.h>
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
	int a[20],l,m,n;
	printf("Enter No of elements : ");
	scanf("%d",&l);
	printf("Enter elements : ");
	for(int i=0;i<l;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter M : ");
	scanf("%d",&m);
	printf("Enter N : ");
	scanf("%d",&n);
	sort(a,l);
	printf("Mth Maximum : %d\nNth Minimum : %d\nSum= %d\nDifference= %d",a[l-m],a[n-1],a[l-m]+a[n-1],a[l-m]-a[n-1]);
	
	
}
