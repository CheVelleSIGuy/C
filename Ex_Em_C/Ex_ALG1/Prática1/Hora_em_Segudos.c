#include <stdio.h>

int main(void)
{
	int sec, min, h, convert;

	scanf("%dh", &h);
	scanf("%dm", &min);
	scanf("%ds", &sec);

	convert = (h*60*60)+(min*60)+(sec*1);

	printf("%ds\n", convert );

	return 0;

}
/*lembrar que após "%d" não interfere diretamente na conta, mas antes sim*/