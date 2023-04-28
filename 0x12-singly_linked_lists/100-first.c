#include <stdio.h>

void before_main(void) __attribute__ ((constructor));

/**
* before_main - prints a sentence before the main
* function is executed
*/
void before_main(void)
{
printf("Hear me, oh ye of little faith. Do not despair, for I am here!\n\n");
}
