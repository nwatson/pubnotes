#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	for(int i = 0; i < 10000000; i++) {
		open("./asdf", O_RDONLY);
	}

	exit(EXIT_SUCCESS);
}
