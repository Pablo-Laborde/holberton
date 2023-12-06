#include "shell.h"

/**
 * check_built- checks if function is a built in one
 * @cmd: command to check if exists
 * @cmds: lsit of commands
 * @status: exit status
 * Return: 0 on success, 1 on failure
 */
int check_built(char **cmd, l_node *cmds, int *status)
{
	if (!strcmp(cmd[0], "env"))
	{
		env_imp();
		return (0);
	}
	else if (!strcmp(cmd[0], "exit"))
	{
		exit_imp(cmd, cmds, status);
		return (0);
	}
	return (1);
}

/**
 * env_imp- prints the invironment
 * Return: void
 */
void env_imp(void)
{
	int	i;

	if (environ)
		for (i = 0; environ[i]; i++)
			printf("%s\n", environ[i]);
}

/**
 * exit_imp- exits the current ejecution
 * @cmd: array of command and arguments to free
 * @cmds: list of commands and arguments to free
 * @status: exit status
 * Return: void
 */
void exit_imp(char **cmd, l_node *cmds, int *status)
{
	free_args(cmd);
	free_list(cmds, 1);
	_exit(*status);
}
