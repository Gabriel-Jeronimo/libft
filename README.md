![banner-github](https://user-images.githubusercontent.com/55462130/133696467-f055313a-4cb1-4e24-974a-062ca7e588a8.png)

## ❓ What is libft.

Libft is one of many [42SP](https://www.42sp.org.br) projects, in this project we need to re-create some of the functions from the standard C library [libc](https://en.wikipedia.org/wiki/C_standard_library). We will use the functions created in this library in all other projects during graduation. This project aims to make students understand the basics of data structures and algorithms.

## 🔧 Testing the implementation.
To test the code we're going to use [Libft war machine](https://github.com/ska42/libft-war-machine).
1. Clone this repository
```
git clone https://github.com/Gabriel-Jeronimo/libft.git
```
2. Clone libft-war-machine repository.
```
git clone https://github.com/ska42/libft-war-machine.git
```
3. Move into the libft-war-machine repository and create config file.
```
cd libft-war-machine
bash grademe.sh
```
4. Change the PATH_LIBFT in the makefile.
```
nano my_config.sh
```
```
#!/bin/bash

###################################
#     Mandatory configuration     #
###################################

#Edit the next line with the path of your libft project.
PATH_LIBFT=caminho_da_libft
```

5. Run the test script.
```
bash grademe.sh
```

## 📑 List of functions
### Functions from <ctype.h>
 - [ft_isalpha](ft_isalpha.c) - checks for an alphabetic character.
 - [ft_isdigit](ft_isdigit.c) - check for a digit (0 through 9).
 - [ft_isalnum](ft_isalnum.c) - checks for an alphanumeric character.
 - [ft_isascii](ft_isascii.c) - checks whether c fits into the ASCII character set.
 - [ft_isprint](ft_isprint.c) - checks for any printable character.
 - [ft_toupper](ft_toupper.c) - convert char to uppercase.
 - [ft_tolower](ft_tolower.c) - convert char to lowercase.
### Functions from <string.h>
 - [ft_strlen](ft_strlen.c) - calculate the length of a string.
 - [ft_memset](ft_menset.c) - fill memory with a constant byte.
 - [ft_bzero](ft_bzero.c) - zero a byte string.
 - [ft_memcpy](ft_memcpy.c) - copy memory area.
 - [ft_memmove](ft_memmove.c) - copy memory area.
 - [ft_strlcpy](ft_strlcpy.c) - copy string to a specific size.
 - [ft_strlcat](ft_strlcat.c) - concatenate a string to a specific size.
 - [ft_strchr](ft_strchr.c) - locate character in a string.
 - [ft_strrchr](ft_strrchr.c) - locate character in a string.
 - [ft_strncmp](ft_strncmp.c) - compare two strings.
 - [ft_memchr](ft_memchr.c) - scan memory for a character.
 - [ft_memcmp](ft_memcmp.c) - compare memory areas.
 - [ft_strnstr](ft_strnstr.c) - locate a substring in a string.
 - [ft_strdup](ft_strdup.c) - creates a duplicate for the string passed as a parameter.
### Functions from <stdlib.h>
 - [ft_atoi](ft_atoi.c) - convert a string to an integer.
 - [ft_calloc](ft_calloc.c) - allocates memory and sets its bytes' values to 0.
### Non-standard functions
 - [ft_substr](ft_substr.c) - returns a substring from a string.
 - [ft_strjoin](ft_strjoin.c) - concatenates two strings.
 - [ft_strtrim](ft_strtrim.c)- trims the beginning and end of a string with a specific set of chars.
 - [ft_split](ft_split.c) - splits a string using a char as parameter.
 - [ft_itoa](ft_itoa.c) - converts a number into a string.
 - [ft_strmapi](ft_strmapi.c) - applies a function to each character of a string.
 - [ft_striteri](ft_striteri.c) - applies a function to each character of a string.
 - [ft_putchar_fd](ft_putchar_fd.c) - output a char to a file descriptor.
 - [ft_putstr_fd](ft_putstr_fd.c) - output a string to a file descriptor.
 - [ft_putendl_fd](ft_putendl_fd.c) - output a string to a file descriptor, followed by a new line.
 - [ft_putnbr_fd](ft_putnbr_fd.c) - output a number to a file descriptor.
Linked list functions
 - [ft_lstnew](ft_lstnew.c) - creates a new list element.
 - [ft_lstadd_front](ft_lstadd_front.c) - adds an element at the beginning of a list.
 - [ft_lstsize](ft_lstsize.c) - counts the number of elements in a list.
 - [ft_lstlast](ft_lstlast.c) - returns the last element of the list.
 - [ft_lstadd_back](ft_lstadd_back.c) - adds an element at the end of a list.
 - [ft_lstclear](ft_lstclear.c) - deletes and free list.
 - [ft_lstiter](ft_lstiter.c) - applies a function to each element of a list.
 - [ft_lstmap](ft_lstmap.c) - applies a function to each element of a list.
