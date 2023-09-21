#include<stdio.h>


int partition(int a[],int start,int end){
	   int pivot=start;
	   int temp;
	   while(start<end){
	   	while(a[start]<=a[pivot]){
	   		start++;
		   }
		   while(a[end]>a[pivot]){
		   	end--;
		   }
		   if(start<end){
		   	temp=a[start];
		   	a[start]=a[end];
		   	a[end]=temp;
		   }
	   }
	temp=a[pivot];
	a[pivot]=a[end];
	a[end]=temp;
	return end;
}

void quicksort(int a[],int lb,int ub){
	int pos;
	if(lb<ub){
		pos=partition(a,lb,ub);
		quicksort(a,lb,pos-1);
		quicksort(a,pos+1,ub);
	}
}
void printArray(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int main(){
	int a[]={5,3,1,5,3,5,6,3};
	printf("Unsorted array is:\n");
	printArray(a,5);
	quicksort(a,0,4);
	printf("Sorted array is:\n");
		printArray(a,5);
	return 0;
}

