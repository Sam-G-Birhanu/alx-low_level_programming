//#!/bin/bash
#include "main.h"

/**
 *  * _puts - prints a string
 *   * @str: is a string pointer
 *    * Return: void
 *     */

void _puts(char *str)
{
		while (*str != '\0')
				{
							_putchar(*str++);
								}
		_putchar('\n');
}
