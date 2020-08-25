#include<stdio.h>
#include<math.h>
struct complex {
	int realNum;
	int imgNum;
};
int main() {			//z1=a+bi  z2=c+di
	struct complex z1,z2,c;
	scanf_s("%d %d", &z1.realNum, &z1.imgNum);
	scanf_s("%d %d", &z2.realNum, &z2.imgNum);
	c.realNum = z1.realNum + z2.realNum;
	c.imgNum = z1.imgNum + z2.imgNum;
	if (c.imgNum >= 0) {
		printf("%d +%d(i)\n", c.realNum, c.imgNum);
	}
	else {
		printf("%d -%d(i)\n", c.realNum, c.imgNum);
	}
	printf("the absolute of addition of complex is\n");
	float absolute = sqrt((pow(c.realNum, 2) + pow(c.imgNum,2)));
	printf("%.2f", absolute);
	return 0;
}