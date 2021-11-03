#include <Stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int sum=0,now=1;
	for(int i=1;i<=n;i++)
	{
		now *= i;
		sum += now;
	}
	printf("請輸入任一整數:1!到5!的總和為=%d \n",sum);
}
