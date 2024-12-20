#include <stdio.h>

void bubblesort(int arr[],int n){
	for(int i = 0 ; i<n-1 ; i++){
		for(int j = 0 ; j<n-i-1 ; j++){
			if(arr[j] < arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
}
int main(){
	int n ;
	printf("nhap n :");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i< n ; i++){
		printf("nhap so thu %d :" ,i+1);
		scanf("%d",&arr[i]);
		}
	
	bubblesort(arr,n);
	for(int i = 0 ; i<n ; i++){
		for(int i = 0 ; i < n ; i++){
			printf("%d\n , " ,arr[i]);
		}
	}
	return 0;
		
	
}
