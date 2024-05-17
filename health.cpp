#include"health.h"
#include<cmath>

health::health(int a)
{
	age = a;
}
void health::ctof()
{
	faren = cel*9.0 / 5.0 + 32.0;
}
void health::ftoc()
{
	cel = (faren - 32) * 5.0 / 9.0;
}
void health::measureCel()
{
	cel = rand() % 10 + 30;
	ctof();
}