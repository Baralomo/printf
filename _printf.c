#include "main.h"
/**
 * _printf -  a function that produces output according to a format.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char * const format, ...)
{
    handler h[]{
        {"%s", printf_string},
        {"%c", printf_char},
        {"%%", printf_37}
    };
}

