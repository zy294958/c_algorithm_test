#include <stdio.h>

#include <string.h>

int main()

{

	int a, b;

	scanf_s(" %d%d", &a, &b);

	if (a >= b)

		printf("%d", a);

	else

		printf("%d", b);

	return 0;

}

