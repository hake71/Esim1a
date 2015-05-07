/**
	* Version: 0.0.1
	* Author: Hannu Harju
	*/
#include <stdlib.h>
#include <stdio.h>
#include "operations.h"

int printEnviroment(void){

	char * pwd = getenv("PWD");
	
	if(pwd){
		printf("%-10s is: %s\n", "PWD", pwd);
		return 0;
	}
	return -1;
}

int printOneEnviroment(char *env){
	char * some_env = getenv(env);
	
	if(some_env){
		printf("%-10s is: %s\n", env, some_env);
		return 0;
	}
		
	return -1;
}

/* End of file */
