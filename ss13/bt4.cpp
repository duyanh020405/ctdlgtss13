#include <stdio.h>

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
	 int n ;
    int choice;
	printf("nhap n :");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i< n ; i++){
		printf("nhap so thu %d :" ,i+1);
		scanf("%d",&arr[i]);}

    printArray(arr, n);

    insertionsort(arr, n);
    printArray(arr, n);

    return 0;
}

