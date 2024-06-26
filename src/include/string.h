
#ifndef _STRINGVEC_H_
#define _STRINGVEC_H_

#include "vector.h"

typedef vector_t string_t;

string_t *string_from(int len, const char str[]);
string_t *string_init();
int string_size(const string_t *str);
int string_capacity(const string_t *str);
char **string_data(const string_t *str);
char *string_get(const string_t *str, int index);
void string_add(string_t *restrict str, char chr);
void string_remove(string_t *str, int index);
void string_print(const string_t *str);
void string_println(const string_t *str);
void string_destory(string_t *str);

#endif
