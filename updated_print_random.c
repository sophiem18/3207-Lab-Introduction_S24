#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}
char randchar(){
	int num = (97+rand()%26);
	return (char)num;
}