#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	struct stat sb;

	for(int i = 0; i < 10000000; i++) {
		stat("./asdf", &sb);
	}

	exit(EXIT_SUCCESS);
}
