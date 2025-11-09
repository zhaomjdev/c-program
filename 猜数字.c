#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int a,b,c=0;
	srand(time(NULL));
	a=rand()%100+1;
	printf("欢迎来到猜数字游戏\n");
	do{
	printf("请输入一个1-100之间的数字：\n");
	scanf("%d",&b);
	c++;
	if(b<a){
		printf("太小了\n");
	}
	else if(b>a){
		printf("太大了\n");
	}
	else{
		printf("正确\n");
	}
}
while(a!=b);
printf("共用%d次\n",c);
	return 0;
}
