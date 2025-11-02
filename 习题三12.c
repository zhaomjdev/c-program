#include<stdio.h>
int main(){
	double sum=0;
	double a=2.0,b=1.0;
	int i=0;
	for(i=0;i<20;i++){
		sum+=a/b;
		a=a+b;
		b=a-b;
	}
	printf("前20项的和=%.6f\n",sum);
	return 0;
}
