#include <stdio.h>
#include <assert.h>

int main()
{
	double x,y;
	int r = scanf("%lf%lf",&x,&y);
	assert (r == 2);
	printf("%lf\n", x + y);
	return 0;
}
