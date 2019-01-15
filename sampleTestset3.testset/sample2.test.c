#include <time.h>

int main() {
	struct timespec t = {
		.tv_sec = 0,
		.tv_nsec = 500000000,
	};

	nanosleep(&t, NULL);
	return 0;
}