#include<stdio.h>
int main(){
	int a;
	printf("请输入一个整数：\n");
	scanf("%d",&a);
	if(a%3==0&&a%5==0&&a%7==0){
		printf("能同时被3，5，7整除\n");
	}
	else if(a%3==0&&a%5==0&&a%7!=0){
		printf("能被3和5整除\n");
	}
	else if(a%3==0&&a%5!=0&&a%7==0){
		printf("能被3和7整除\n");
	}
	else if(a%3!=0&&a%5==0&&a%7==0){
		printf("能被5和7整除\n");
	}
	else if(a%3==0&&a%5!=0&&a%7!=0){
		printf("能被3整除\n");
	}
	else if(a%3!=0&&a%5==0&&a%7!=0){
		printf("能被5整除\n");
	}
	else if(a%3!=0&&a%5!=0&&a%7==0){
		printf("能被7整除\n");
	}
	else {
		printf("不能被3，5，7任一个整除\n");
	}
	return 0;
}
