#include <stdio.h>
#include "aorta.h"

#define VERSION "2.0"

int main(int argc, char **argv) {
	char getwell[] = "[x] Aorta patch detected\n" \
                         "\n" \
                         "All systems up and running        [ OK ]\n" \
                         "\n" \
                         "\n" \
                         "\n" \
                         "\n";
        char getwell2[] = "Get well real soon david, we are all rooting for you!\n";
	char *ptr;

	printf("***********************************\n");
	printf("* Welcome to David's Firmware 2.0 *\n");
	printf("***********************************\n");

	aorta();

	for (ptr = getwell; *ptr; ptr++) {
		printf("%c", *ptr);
		fflush(stdout);
		usleep(10000);
	}

	for (ptr = getwell2; *ptr; ptr++) {
		printf("%c", *ptr);
		fflush(stdout);
		usleep(100000);
	}
	
	return 0;
}
