#include<cstdio>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int b[12];
	b[1]=1;
	b[2]=2;
	b[3]=4;

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int i=4;i<=11;i++)
	{
		b[i]=b[i-1]+b[i-2]+b[i-3];
	}

	for(int i=0;i<n;i++)
	{
		printf("%d\n",b[a[i]]);
	}
}
