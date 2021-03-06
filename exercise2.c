#include <stdio.h>
/*假设某人有100,000现金.每经过一次路口需要进行一次交费.
交费规则为当他现金大于50,000时每次需要交5%如果现金小于等于50,000时每次交5,000.
请写一程序计算此人可以经过多少次这个路口*/
int main(void)
{
	int num = 0;
	int money = 100000;
	for (; money >= 50000; money *= 0.95)
	{
		num += 1;
	}
	for (; money <= 50000 && money > 0; money -= 5000)
	{
		num += 1;
	}
	printf("可以经过%d次路口", num);
	return 0;
}