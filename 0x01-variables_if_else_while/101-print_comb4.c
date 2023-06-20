#include <stdio.h>
/**
	*main - Entry point
	*Desription: 'print mandatory section lowercase alphets'
	*Return: always 0
*/
int main(void)
{
	int ons = '0';
	int tns = '0';
	int hndrds = '0';

	for (hndrds = '0' ; hndrds <= '9'; hndrds++)
	{
		for (tns = '0'; tns <= '9'; tns++)
		{
			for (ons = '0'; ons <= '9'; ons++)
			{
			if (!((ons == tns) || (tns == hndrds) || (tns > ons) || (hndrds > tns)))
			{
				putchar(hndrds);
				putchar(tns);
				putchar(ons);
				if (!(ons == '9' && hndrds == '7' && tns == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
}

