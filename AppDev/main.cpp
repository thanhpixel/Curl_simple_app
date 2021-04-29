#include <stdio.h>
#include <stdlib.h>     // for rand() and srand()
#include <time.h>       // for time() in srand()
#include "appdev.h"

int main() {
	rock r;				// declare an instance of struct rock
	printf("Application Developers Rock!\n");
	printf("Enter Rockers' name: ");
	scanf_s("%s", r.rname, (unsigned)_countof(r.rname));
	srand(time(0));
	r.max = rand() % 50 + 51;	// max
	r.min = rand() % 50 + 1;	//min
	send_data(r);
	printf("Rockn' Roll\n");
	return 0;
}
