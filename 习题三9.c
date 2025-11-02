#include<stdio.h>
int main(){
	int s=0;
	int term=1;
	int i;
	for(i=0;i<7;i++){
		s+=term;
		term*=2;
	}
	printf("%d",s);
	return 0;
}
