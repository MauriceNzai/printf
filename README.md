PROJECT:- OWN PRINTF FUNCTION _printf(). REPOSITORY:- printf. CONTRIBUTORS:- Maurice Haro and Wisdom Dzontoh.


_printf is a function that does formatted printing. In this project we develop this function for simple printing and the specifications for formatted printing.

Depending on yhe content in the parameter list (), the function will use simple printing or use the specifiers for formatted printing.
In this project, we concentrate on Task 0, and Task 1 which are mandatory. The advanced tasks will be tackled with time

Task 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.
Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the stadard output streamm.
format is a character string. The format string is composed of zero or more directives.
You need to handle the following conversion specifiers: c, s, and %.