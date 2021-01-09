#include<stdio.h>

int a=4;
 void fun1()
 {
 	int b;
 	b=4;
 	a=a+1;
 	printf("\na::%d\tb::%d\n",a,b);
 }
  void fun2()
 {
 	int b;
 	b=3;
 	a=a-1;
 	printf("\na::%d\tb::%d\n",a,b);
 }
  void fun3()
 {
 	int b;
 	b=-6;
 	a=a*2;
 	printf("\na::%d\tb::%d\n",a,b);
 }
 
 int main()
 {
 	int b;
 	b=2;
 	fun1();
 	fun2();
 	fun3();
 	printf("b ::  %d",b);
 	return 0;
 }
