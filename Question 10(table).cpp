#include<stdio.h>
int main(){
	int num;
	char resp;
	do{
		printf("\nEnter number for its table : ");
		scanf("%d",&num);
		for(int i=0;i<=10;i++){
			printf("\n%d x %d = %d ",num,i,i*num);
		}
		printf("\nDo you want another table (y/n) : ");
		scanf(" %c",&resp);
	}while(resp!='n');
	return 0;
}

