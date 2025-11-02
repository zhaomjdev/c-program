#include<stdio.h>
int main(){
	int a,b;
	printf("请输入两个整数：\n");
	scanf("%d%d",&a,&b);
	if(a%b==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}
