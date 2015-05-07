/**
	* Version: 0.0.1
	* Author: Hannu Harju
	*/

/**
	* This is a main execution point of this application
	*	@param argc number of command line arguments
	* @param argv	pointer to array containing the cmd arguments
	*	@return	integer containing the exit status
	*/

#include <stdio.h>
#include "operations.h"

int main(int argc, char *argv[]) {

	int ret_val = printEnviroment();

	if(ret_val == 0)
	{
		printOneEnviroment("$HOME");
	}
	
	printOneEnviroment("HOME");

	return 0;
}

/* End of file */

