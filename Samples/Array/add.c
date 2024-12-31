#include <stdio.h>
#include <unistd.h>

int add (int a1, int b1);
int sub (int a2,int b2);

void main()
{
	int a,b,c,d;
	printf("Enter the two numbers to be added:");
	scanf("%d %d",&a,&b);
	c=add(a,b);
	printf("The sum of the two numbers is :%d\n",c);
	d=sub(a,b);
	printf("THe difference between the two numbers is:%d\n",d);
}

int add (int a1, int b1)
{
	int c1;
	c1=a1+b1;
	printf("Address of c1:%p\n",&c1);
	return c1;
}

int sub (int a2,int b2)
{
	int c2;
	c2=a2-b2;
	printf("Address of c2:%p\n",&c2);
	return c2;
}
