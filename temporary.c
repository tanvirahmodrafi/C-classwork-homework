
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	// output : 1 -1 1 -1 1 -1..
	int i, j = 1;
	for (i = 0; i < 7; i++)
	{
		if (i % 2 != 0)
		{
			j -= 2;
			printf("%3d\n", j);
			j += 2;
		}
		else
		{
			printf("%3d\n", j);
		}
	}

	return 0;
}
