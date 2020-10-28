#include<cstdio> 
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	double x1,y1,x2,y2;
	scanf("%lf%lf",&x1,&y1);
	scanf("%lf%lf",&x2,&y2);
	double res = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
	printf("%0.3lf\n", res);
	
}
