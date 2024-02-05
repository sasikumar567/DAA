#include<stdio.h>
void merge(int arr[],int left,int mid ,int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
	int a1[20],a2[20],m,n,x=0;
	printf("Enter Array 1 size : ");
	scanf("%d",&m);
	printf("Enter Array 1 :\n");
	for(int i=0;i<m;i++){
		scanf("%d",&a1[i]);
	}
	printf("Enter Array 2 size : ");
	scanf("%d",&n);
	printf("Enter Array 2 :\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a2[i]);
	}
	int a[m+n];
	for(int i=0;i<m;i++){
		a[x++]=a1[i];
	}
	for(int i=0;i<n;i++){
		a[x++]=a2[i];
	}
	mergesort(a,0,x-1);
	printf("Sorted Array : ");
	for(int i=0;i<x;i++){
		printf("%d ",a[i]);
	}
}
