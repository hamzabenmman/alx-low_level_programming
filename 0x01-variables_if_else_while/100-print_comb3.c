#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
    for (i = 0; i < 89; i++) {
        for (j = i + 1; j < 89; j++) {
            putchar('0' + i);
            putchar('0' + j);
            putchar(' ');
        }
    }
    return 0;
}
