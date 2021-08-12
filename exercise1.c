#include <stdio.h>
/*公园里有一只猴子和一堆桃子，猴子每天吃掉桃子总数的一半，
把剩下一半中扔掉一个坏的。到第七天的时候，
猴子睁开眼发现只剩下一个桃子。问公园里刚开始有多少个桃子？*/
int main(void)
{
	int peach = 1;
	for (int day = 6; day >= 1; day -= 1) {
		peach = (peach + 1) * 2;
	}
	printf("刚开始有%d个桃子\n", peach);
	return 0;
}
//答案
/*var t = 1;
    for(var d = 6;d >= 1; d--){
        t = (t + 1) * 2
    }if( d < 1){
        alert("刚开始有" + t + "个桃子");
	}*/
//还多用个if？