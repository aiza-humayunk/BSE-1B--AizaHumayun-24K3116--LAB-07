#include <stdio.h>

int main() {
	
    int marks, pass[10], fail[10];
    int pass_count = 0, fail_count = 0;
    float pass_sum = 0, fail_sum = 0;

    printf("Enter quiz marks (-1 to stop): \n");

    for(int i=0; i<10; i++){
    	
        scanf("%d", &marks);
        if(marks == -1)
            break;
        if(marks>=5 && marks<=10) {
            pass[pass_count++] = marks;
            pass_sum += marks;
        } else if(marks >= 0 && marks < 5) {
            fail[fail_count++] = marks;
            fail_sum += marks;
        }
    }

    printf("\nPass students marks: ");
    for(int i=0; i<pass_count; i++)
        printf("%d ",pass[i]);

    printf("\nFail students marks: ");
    for(int i=0; i<fail_count; i++)
        printf("%d ",fail[i]);

    if(pass_count > 0)
        printf("\nAverage of pass marks = %.2f", pass_sum / pass_count);
    if(fail_count > 0)
        printf("\nAverage of fail marks = %.2f", fail_sum / fail_count);

    return 0;
}

