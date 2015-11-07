#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int height;   // height of the pyramid

	printf("Height: ");

	do{
		height = GetInt();

		if ( height >= 0 && height <= 23 )
			break;

		printf("Retry: ");
		continue;

	} while(1);

	// print the pyramid
	int i,s,p;
	for (i=0; i < height; i++)
	{
		for (s = 0; s < height - 1 -i; s++)
			printf(" ");
		for(p = 0; p < i; p++ )
			printf("#");
		printf("##\n");
	}

	return 0;
}
