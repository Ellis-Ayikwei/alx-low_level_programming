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
char *rot13(char *);
void print_number(int n);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int is_prime_number(int n);
/*07*/
/*08*/
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

/*0B*/
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char **strtow(char *str);
#endif /* MAIN_H */
