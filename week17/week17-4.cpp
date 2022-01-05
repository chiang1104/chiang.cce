#include <stdio.h>
int fun(int N)
{
	int sum=0;
	while (N>0)
	{
		sum+=N%10;
		N=N/10;
	}
	return sum;
}
int main()
{
	 int N;
	 while( scanf("%d",&N)==1)
	 {
	 	if(N==0	) break;
	 	int ans = fun(fun(fun(N)));
	 	printf("%d\n",ans);
	 }
}
