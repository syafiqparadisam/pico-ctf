#include<stdio.h>

int tes(int a, int b) {
    while (b <= 25587) {
        a = a + 1;
        b = b - 4294967168;
    }
    return a;
}

int main(int argc, char **argv) {
	
	int a = 46;
	int b = 11;

	int c = tes(a, b);
	printf("%d\n", c);

	return 0;
}
