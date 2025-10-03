#include<stdio.h>
#include<math.h>
int main(){
	int num,digits,power;
	int sum =0;
	int count=0;
	printf("\nEnter number : ");
	scanf("%d",&num);
	int a = num;
	while(a!=0){
		a/=10;
		count++;
	}
	a=num;
		for(int j=0;j<count;j++){
			digits=a%10;
			power=pow(digits,count);
			sum+=power;
			a/=10;
		}
	if(sum==num)
		printf("\nThe number is armstrong number.");
	else 
		printf("\nThe number is not armstrong number.");
	return 0;
}
