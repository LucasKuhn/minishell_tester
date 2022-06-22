#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
	int	pid;

	pid = fork();
	open("infile", O_RDONLY);
	while(1)
	{
		printf("Helloo miniHELL %i\n", pid);
		sleep(1);
	}
	/* code */
	return 0;
}
