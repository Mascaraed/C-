#include <stdio.h>
#include<math.h>

void main()
{
	float a,b,c;
	float area,s;
	printf("please input a b c: ");
	scanf("%f%f%f",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a)
	{
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area is %f\n",area);
	}
	else
		printf("input errer\n");
}
