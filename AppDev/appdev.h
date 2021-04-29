#define N 20	// length of user name

typedef struct {
	int min;
	int max;
	char rname[N];	// This string can hold N-1 characters
}rock;

void send_data(rock);

