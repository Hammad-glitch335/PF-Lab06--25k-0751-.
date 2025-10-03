#include<stdio.h>

int main(){
	int num,remainder,original_num;
	int reversed = 0;
	
	printf("\nEnter numbers : ");
	scanf("%d",&num);
	original_num=num;
	while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
	if (original_num == reversed)
		printf("\nThe number %d is plaindrome ",original_num);
	else
		printf("\nThe number %d is not plaindrome ",original_num);
	return 0;
}
