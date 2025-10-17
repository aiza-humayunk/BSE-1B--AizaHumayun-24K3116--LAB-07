#include <stdio.h>

int main(){
	
	char arr[100];
	
	printf("Enter a sentence: ");
	scanf("%[^A-Z,^a-z]",&arr);
	printf("You entered :%s",arr);

	
	return 0;
}

