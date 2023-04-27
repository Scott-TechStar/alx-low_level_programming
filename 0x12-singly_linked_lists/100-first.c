#include <stdio.h>
void __attribute__((constructor)) prnt_str(void);
/**
 * prnt_str - Prints a string before the
 *        main function is executed.
 */
void prnt_str(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
