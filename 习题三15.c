#include<stdio.h>
int main(){
	int sum=0;
	int n=0;
    while(sum<100){
    	n++;
    	sum+=n;
	}
	printf("n=%d,sum=%d\n",n,sum);
	return 0;
}
