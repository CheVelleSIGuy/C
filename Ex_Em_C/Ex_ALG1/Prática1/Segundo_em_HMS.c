#include <stdio.h>

int main(void)
{
	int s, m, h, convert;

	scanf("%d", &convert);

	h = convert/60/60%24;
	m = convert/60%60;
	s = convert%60;

	printf("%dh%dm%ds", h, m, s);
	return 0;

}