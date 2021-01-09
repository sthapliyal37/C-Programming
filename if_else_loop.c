#include<stdio.h>
int main()
{
	int a=1;		//size 4 bytes
	long long int e=3; 	// size 8 bytes
	float b=3.14;	//size 4 bytes
	double c= 3.13; //size 8 bytes
	char d = 'a';	//size 1 bytes
	/* 	
		printing all the values
		a,b,c,d,e
	*/
	printf("\nint a=%d \nlong long int e=%lld \nfloat b=%f \ndouble c= %lf \nchar c=%c\n",a,e,b,c,d);
	
	printf("\nif-else\n");
	if(a>3)
	{
		printf("Hello..!!\n");
	}
	else if(a==3)
	{
		printf("Hi..\n");
	}
	else
	{
		printf("Hye..!!\n");
	}
	
	printf("\nFOR LOOP\n");
	for(a=0;a<4;a++)
	{
		printf("\nFor Loop a = %d \n",a);
	}
	
	
	printf("\nWHILE LOOP\n");
	a=0;
	while(a<4)
	{
		printf("\nWhile Loop a= %d\n ",a);
		a++;
	}
	
	printf("\nDO-WHILE LOOP\n");
	
	a=0;
	do
	{
		printf("\nWhile Loop a= %d\n ",a);
		a++;
	}while(a<4);
	
	return 0;
}
