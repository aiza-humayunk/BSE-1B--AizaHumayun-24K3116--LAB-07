#include <stdio.h>

int main(){
	
	int min, max;
	int arr[10];
	printf("Enter 10 numbers: ");
	
	for(int x=0; x<10; x++){
		scanf("%d",&arr[x]);
	}
	min=max=arr[0];
	
	for(int y=1; y<10; y++){
		if(arr[y]<min){
			min=arr[y];
		}
		if(arr[y]>max){
			max=arr[y];
		}
	}
	printf("Minimum = %d\nMaximum = %d\nDifference =%d",min,max,max-min);
	
	return 0;
}

