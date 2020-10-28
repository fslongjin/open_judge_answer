#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	int r;
	scanf("%d",&r);
	int baiwei,shiwei,gewei;
	gewei = r%10;	r -= gewei;
	shiwei = (r%100)/10; r -= shiwei*10;
	baiwei = r/100;
	int res = gewei*100 + shiwei*10 + baiwei;
	printf("%03d",res);
}
