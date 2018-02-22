#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,s;
	scanf("%d",&a);
	for(i=1;i<=100;i++)
	{
		s=pow(2,i);
		if(s==a)
		{
			printf("Yes");
		}
	}
	return 0;
}
