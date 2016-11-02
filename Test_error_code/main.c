/*
 * main.c
 *
 *  Created on: 02. nov. 2016.
 *      Author: verne
 */

#include "stdio.h"
#include "error_code.h"

ERROR_CODE saberi(int a, int b)
{
	int c = 0;
	ERROR_CODE error = NO_ERROR;

	if (a < b)
	{
		c = a + b;
		return error;
	}
	else
	{
		error = VARIABLE_OVERFLOW;
	}
	return error;
}

int main()
{
	ERROR_CODE err = NO_ERROR;;

	err = saberi(5,4); // Handle error
	printf("%d",err);

#if 0
	if( i == 5 )
	{
		printf("%d",err);
		return err;
	}
	else
	{
		err = VARIABLE_OVERFLOW;
		printf("%d",err);
		return err;
	}
#endif

}
