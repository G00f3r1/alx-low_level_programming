#ifndef holberton_h
#define holberton_h

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: accept input of a character ascii or int and pass it to _putchar
 * the character to print
 *
 * Return: write to screen
 */

int _putchar(char c);
/**
 * print_alphabet - Display small letters to screen
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prototype declaration
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase
 * @c: accepts both signed and unsigned integer to correspond to ascii
 * Return: with 0, successful. Else 1, print to stderr
 */

int _islower(int c);

/**
 * _isalpha - checks for uppercase and lowercase
 * @c: accepts integer both signed and non signed and relates it to ascii
 * Return: if 1 then error and quits program
 */

int _isalpha(int c);

/**
 * print_sign - this tell is a number is postive or negative
 * @n: this is used to enter number from users
 * Return: this return the success of the compiled code.
 */

int print_sign(int n);

/**
 * _abs - checks for absoloute value
 * @i:  accepts parameter for absolute value from user
 * Return - value of absolute value is print to screen
 */

int _abs(int i);

#endif /* holberton_h */
