#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar();

char randchar(){
	int num = (97+rand()%26);
	return (char)num;
}
