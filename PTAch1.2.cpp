#include <stdio.h>
int main(void){
	int H;
	double standard;
	scanf("%d",&H);
	standard=(H-100)*0.9*2;
	printf("%.1f\n",standard);
	return 0;
}
