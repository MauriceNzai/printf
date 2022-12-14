#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * check_format - checks if there is a valid format specifier
 * @format: possible valid format specifier
 * Return: pointer to valid function or NULL
 */

int (*check_format(const char *format))(va_list)
{
int i = 0;

print_t p[] = {
{"c", print_c},
{"s", print_s},
{"i", print_i},
{"d", print_d},
{"b", print_b},
{"u", print_u},
{"o", print_o},
{"x", print_x},
{"X", print_X},
{"S", print_S},
{"p", print_p},
{"r", print_r},
{"R", print_R},
{NULL, NULL}
};

for (; p[i].t != NULL; i++)
{
if (*(p[i].t) == *format)
break;
}

return (p[i].f);
}
