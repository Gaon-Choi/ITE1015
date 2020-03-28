#include <stdio.h>

typedef struct Point{
	int xpos;
	int ypos;
}Point;

Point getScale2xPoint(const Point* p) {
	printf("Calling getScale2xPoint()\n");
	Point pt;
	pt.xpos = 2 * p->xpos;
	pt.ypos = 2 * p->ypos;
	return pt;
}

void swapPoint(Point* p1, Point* p2) {
	printf("Calling swapPoint()\n");
	Point p;
	p = *p1;
	*p1 = *p2;
	*p2 = p;
	return;
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	Point p1;
	p1.xpos = a;
	p1.ypos = b;
	
	Point p2;
	p2 = getScale2xPoint(&p1);
	printf("P1 : %d %d\n", p1.xpos, p1.ypos);
	printf("P2 : %d %d\n", p2.xpos, p2.ypos);
	swapPoint(&p1, &p2);
	printf("P1 : %d %d\n", p1.xpos, p1.ypos);
	printf("P2 : %d %d\n", p2.xpos, p2.ypos);
	
	return 0;
}
