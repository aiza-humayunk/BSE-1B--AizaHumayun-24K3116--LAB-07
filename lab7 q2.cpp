#include <stdio.h>

int main(){
	
	int num, flag=0;
	int arr[10];
	printf("Enter 10 numbers: ");
	
	for(int x=0; x<10; x++){
		scanf("%d",&arr[x]);
	}
	
	printf("Enter number to be searched: ");
	scanf("%d",&num);
	for(int y=0; y<5; y++){
		if(arr[y]==num){
			flag++;
		}
	}
	if (flag!=0){
		printf("Your number is present in the array %d times !",flag);
	}
	else{
		printf("Number not found !");	
		
	}
	
	return 0;
}
