#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

/**
 * create_child - creates a child process
 *
 */
void create_child(void)
{
	pid_t child_pid = fork();
	pid_t PID = getpid();

	if (child_pid == 0)
	{
		printf("zombie process create PID  %d\n", PID);
		exit(0);
	}
}

/**
 * infinite_while - loops to create a child infinitly
 * Return: 0 on success
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main- entry point
 * Return: 0 on success
*/

int main(void)
{
	int i;

	i = 0;
	while (i < 5)
	{
		create_child();
		i++;
	}
	infinite_while();
	return (0);
}
