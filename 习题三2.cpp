#include<stdio.h>
#define PI 3.14
int main(){
	double r,h,c,s,s1,s2,v;
	printf("请输入圆柱体的半径和高：\n");
	scanf("%lf%lf",&r,&h);
	c=2*PI*r;
	s=PI*r*r;
	s1=c*h;
	s2=2*s+s1;
	v=s*h;
	printf("c=%.2f,s=%.2f,s1=%.2f,s2=%.2f,v=%.2f",c,s,s1,s2,v);
	return 0;
	
}
