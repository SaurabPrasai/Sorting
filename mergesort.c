#include<stdio.h>
#include<math.h>
int b[5];
void merge(int a[],int lb,int mid,int ub){
	int i=lb;
	int j=mid+1;
	int k=lb;
	while(i<=mid&&j<=ub){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
		}else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	//if elements remains
	if(lb>mid){
		while(j<=ub){
			b[k]=a[j];
			j++;
			k++;
		}}else{
			while(i<=mid){
				b[k]=a[i];
				i++;
				k++;
			}
		}
	
	  for(k=lb;k<=ub;k++){
	  	a[k]=b[k];
	  }
}
void mergesort(int a[],int lb,int ub){
	int mid;
	if(lb<ub){
		mid=ceil((lb+ub)/2);
	    mergesort(a,lb,mid);
	    mergesort(a,mid+1,ub);
	    //merging the elements
	    merge(a,lb,mid,ub);
	}
}
void printArray(int a[],int n){
	printf("Sorted array is:\n");
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int main(){
	int a[]={5,4,3,2,1};
    mergesort(a,0,4);
    printArray(a,5);
	return 0;
}
