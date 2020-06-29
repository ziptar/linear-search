/*
 ============================================================================
 Name        : linear-search.c
 Author      : Said TALEB ALI
 Version     : 1.0
 Copyright   : MIT
 Description : Search for a number in an array using linear search.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LENGTH 10


int main(void) {

	int list[LENGTH] = {12 ,-5 ,0 ,8 ,5 ,8 ,3 ,-4 ,-1 ,20};

	int item = 0;
	int i = 0;
	bool found = false;

	printf("Enter the number you are looking for: ");
	scanf("%d", &item);

	while(!found && i < LENGTH)
	{
		if (item == list[i])
		{
			found = true;
		}
		else
		{
			i++;
		}
	}

	if (!found)
	{
	        printf("The number %d is not a member of the list. \n", item);
	}
	else
	{
	        printf("The number %d is found at index %d in the list. \n", item, i);
	}

	return EXIT_SUCCESS;
}
