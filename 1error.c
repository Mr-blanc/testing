#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
	int a,b;
	printf("Enter 2 numbers\n")
	scanf("%d,%c",&a,&b);
	if((a^b))
	{
		printf("%d = %d\n",a,b)
	}
	else 
	{
		printf("%d != %d\n",a,b)
	}
return 0;
}
	
