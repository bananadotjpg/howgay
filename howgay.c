#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	printf("You are ");
	printf("%d", rand() % 101);
	printf("%% gay \n");

}
