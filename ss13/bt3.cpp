#include <stdio.h>

void selectsort(int arr[], int n) {
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
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void find(int arr[],int n,int a){
	for(int i = 0 ; i<n ; i++){
		if(arr[i] == a){
			printf("so %d o vi tri %d",arr[i],i+1);
		}
	}
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
	printf("nhap so tim kiem");
	scanf("%d",&choice);
		
    selectsort(arr, n);
    printArray(arr, n);
    find(arr,n,choice);

    return 0;
}
 
