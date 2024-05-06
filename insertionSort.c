#include<stdio.h>

void insertionSort(int arr[],int n){

for(int i=1;i<n;i++){
    int key=arr[i];
   int j=i-1;
    while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
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
    insertionSort(arr,n);
    printf("After sorting:");
	display(arr,n);

    return 0;
}