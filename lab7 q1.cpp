#include <stdio.h>

int main(){
	
	int temp;
	int arr[5];
	
	printf("Enter 5 numbers: ");
	for(int x=0; x<5; x++){
		scanf("%d",&arr[x]);
	}
	temp=arr[4];
	for(int x=4; x>0; x--){
		arr[x]=arr[x-1];
	
	}
	arr[0]=temp;
	for(int x=0; x<5; x++){
		printf("%d",arr[x]);
	}
	
	return 0;
}
