#include <stdio.h>
int main()
{
int m,n;
scanf("%d %d",&m,&n);
for(int i = 0; i < m; i++)
{
	for(int j = 0; j < n-i;j++)
		printf("*");
printf("\n");
}
return 0;
} 