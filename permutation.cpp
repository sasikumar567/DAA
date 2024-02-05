5#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void generatePermutations(int arr[], int start, int end) {
    if (start == end) {
        for (int i = 0; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    for (int i = start; i <= end; i++) {
        swap(&arr[start], &arr[i]);
        generatePermutations(arr, start + 1, end);
        swap(&arr[start], &arr[i]);
    }
}
int main() {
    int arr[20],n;
    printf("Enter N: ");
	scanf("%d",&n);
	printf("Enter Elements : ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    printf("Permutations of the array:\n");
    generatePermutations(arr, 0, n - 1);
    return 0;
}

