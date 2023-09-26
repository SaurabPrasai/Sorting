#include<stdio.h>

void bubbleSort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}

int main(){
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array data:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,n);
	return 0;
}
