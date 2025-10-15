#include<cstdio>
#include <algorithm>
using namespace std;

int d[1000000];

int main() {
	int N;
	scanf("%d",&N);
	
	for(int i=2;i<=N;i++)
	{
		d[i]=d[i-1]+1;
		if(i%2==0)
		{
			d[i]=min(d[i/2] + 1, d[i]);
		}
		if(i%3==0)
		{
			d[i]=min(d[i/3] + 1, d[i]);
		}
		
	}
	
	
	printf("%d",d[N]);

	return 0;
}
