#include<stdio.h>

int calc(int i)
{

	while(++i > 10); // statement 0

	++i;

	return i;
}

int main() {
    int i = 2;

    printf("%d", calc(i));

    return 0;
}
