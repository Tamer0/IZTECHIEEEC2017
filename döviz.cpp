#include <stdio.h>

int main ()	{
	float lira;
	float dolar;
	float euro;
	float sterlin;
	lira=100;
	dolar=lira/3.96059995;
	euro=lira/4.64994237 ;
	sterlin=lira/5.23947768 ;
	printf("%f TL= %f $ , %f € ,%f £", lira, dolar,euro,sterlin);
	return 0;
	}
