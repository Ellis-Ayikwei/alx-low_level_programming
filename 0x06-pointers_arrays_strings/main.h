#ifndef MAIN_H
#define MAIN_H

void print_number(int n);
int _isupper(int c);/*finds the uppercase letters*/
int _isdigit(int c);
void print_triangle(int size);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void more_numbers(void);
int _putchar(char c);
void print_alphabet();
void print_alphabet_x10();
int _islower();
int _isalpha();
int _abs();
int  print_sign();
int print_last_digit();
void jack_bauer();
void times_table();
int add(int num1, int num2);
void print_to_98();

/*0x05-pointers_arrays_strings*/
void swap_int(int *a, int *b);
void reset_to_98(int *n);
void _puts(char *str);
int _strlen(char *s);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);

/*06*/
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
#endif /* MAIN_H */
