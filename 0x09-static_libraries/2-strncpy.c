//#!/bin/bash
#include "main.h"
/**
 *  * _strncpy - copies a string,
 *   * @dest: destination.
 *    * @src: source.
 *     * @n: a variable specifying the number of characters
 *      * Return: the pointer to dest.
 *       */

char *_strncpy(char *dest, char *src, int n)
{
		int count = 0;

			while (count < n)
					{
								*(dest + count) = *(src + count);
										if (*(src + count) == '\0')
														break;
												count++;
													}
				while (count < n)
						{
									*(dest + count) = '\0';
											count++;
												}
					return (dest);
}
