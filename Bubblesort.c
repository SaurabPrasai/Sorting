#include<stdio.h>

void bubbleSort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int arr[]={20,10,30,25,29};
	int n=5;
	printf("Unsorted array:\t");
	display(arr,n);
	bubbleSort(arr,n);
	printf("\nSorted array:\t");
    display(arr,n);
	return 0;
}
