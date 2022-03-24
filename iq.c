#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	printf("Your iq is ");
	printf("%d", rand() % 301);
	printf("\n");
}
