#include <stdio.h>

void selectsort(int arr[], int n) {
	int b ;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            
            
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        b+=1;
    }
    printf("so lan lap khi hoan thanh : %d \n",b);
    
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n ;
	printf("nhap n :");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i< n ; i++){
		printf("nhap so thu %d :" ,i+1);
		scanf("%d",&arr[i]);}
		
    selectsort(arr, n);
    printArray(arr, n);

    return 0;
}
 
