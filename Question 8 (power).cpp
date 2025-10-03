#include<stdio.h>
#include<math.h>
int main(){
	int num,power,ans;
	printf("\nEnter number : ");
	scanf("%d",&num);
	printf("\nEnter power : ");
	scanf("%d",&power);
	ans=pow(num,power);
	printf("\nThe %d with the power of %d would be %d",num,power,ans);
	return 0;
}
