#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(const char c);
int _strlen(const char *s);
void _puts(const char *str);
int _numlen(int n);
void _printd(int n);
int _tobin(unsigned int n, int m);
int _tooct(unsigned int n, int m);
void format_int(va_list list, int *printed);
void format_string(va_list list, int *printed);
void format_values(va_list list, const char *format, int *printed, int *count);
#endif
