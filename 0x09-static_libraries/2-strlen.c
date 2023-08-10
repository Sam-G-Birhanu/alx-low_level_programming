//#!/bin/bash
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of the string
 * @s: is a variable that represents a char
 * Return: int type containing the length
 **/

int _strlen(char *s)
{
		int leng = 0;

			while (*s != '\0')
					{
								leng++;
										s++;
											}
				return (leng);
}

