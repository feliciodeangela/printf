#include <unistd.h>
#include <string.h>

int main()
{
	char c=6;
	/*const char *message = "Hello, world!";
	unsigned long int length = strlen(message);
	write(STDOUT_FILENO, message, length);*/
	write(1, &c, 1);
	return 0;
}
