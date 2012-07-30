#include <stdio.h>
#include <stdlib.h>
#include "aorta.h"

void aorta(void) {
	sleep(1);
	printf(".");
	fflush(stdout);
	sleep(1);
	printf(".");
	fflush(stdout);
	sleep(1);
	printf(".");
	fflush(stdout);
	sleep(1);
	printf("\n");

	printf("Segmentation Fault\n");
}
