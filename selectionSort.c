#include<stdio.h>


void selectionSort(int arr[],int n){
for(int i=0;i<n;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
       
    }
     int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
}
}


void  display(int arr[],int n){
		for(int i=0;i<n;i++){
			printf("%d\t",arr[i]);
		}
		printf("\n");
}

int main(){
    int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Before sorting:");
	display(arr,n);
    selectionSort(arr,n);
    printf("After sorting:");
	display(arr,n);

    return 0;
}

// The time complexity of selection sort is O(n^2);