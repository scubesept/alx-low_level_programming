#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

int _putchar(char c);/*prototype _putchar*/
void *malloc_checked(unsigned int b);/*prototype function that allocates memory using malloc.*/
char *string_nconcat(char *s1, char *s2, unsigned int n);/*prtotype function that concatenates two strings.*/
void *_calloc(unsigned int nmemb, unsigned int size);/*prototype function that allocates memory for an array, using malloc.*/
int *array_range(int min, int max);/*prototype function that creates an array of integers.*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);/*function that reallocates a memory block using malloc and free*/

#endif
