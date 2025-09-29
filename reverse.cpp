#include<stdio.h>
int main(){
	int num;
	printf("\nEnter any numbers : ");
	scanf("%d",&num);
	for (int i=0;num>=10;i++){
		printf("%d",num%10);
		num=(num-(num%10))/10;
	}
	printf("%d",num);
	return 0;
}
