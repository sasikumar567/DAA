#include<stdio.h>
void sort(int arr[], int n) 
{
    if (n <= 1)
        return;
    sort(arr, n - 1);
    int last = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] < last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}
int main(){
	int a[20],m,n,b[20];
	printf("Enter No of elements for array 1 : ");
	scanf("%d",&m);
	printf("Enter elements : ");
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter No of elements for array 2 : ");
	scanf("%d",&n);
	printf("Enter elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	sort(a,m);
	sort(b,n);
	mergesort(a,b); 
}
