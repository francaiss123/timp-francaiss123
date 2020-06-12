#include <stdio.h>
#include <math.h>
#include <assert.h>

int main() {
	double x,n;
	int res = scanf("%lf%lf",&x,&n);
	assert (res == 2);
	printf("%lf\n", pow(x,n));
	return 0;
}
