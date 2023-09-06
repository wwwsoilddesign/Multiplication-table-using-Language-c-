#include <stdio.h>
#include <math.h>

int main(){
	int n,i ;
	printf("Enter the  an integer:");
	scanf("%d",&n);
	for(i=1;i<=20; ++i){
		printf("%d * %d = %d \n" , n,i, n*i);
	}
	
	return 0;
}