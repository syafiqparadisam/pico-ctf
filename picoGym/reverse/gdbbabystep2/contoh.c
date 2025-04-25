#include<stdio.h>

int main() {

	int a;
	int c;

	c = 123098;

	for (a = 0; a < 607; a++) {
		c = c + a;
	}
	printf("%d", c);

	return 0;
}
