![banner-github](https://user-images.githubusercontent.com/55462130/133696467-f055313a-4cb1-4e24-974a-062ca7e588a8.png)

## O que é a libft

Libft is one of many [42SP](https://www.42sp.org.br) projects, in this project we need to re-create some of the functions from the standard C library [libc](https://en.wikipedia.org/wiki/C_standard_library). We will use the functions created in this library in all other projects during graduation. This project aims to make students understand the basics of data structures and algorithms.

## Testando a implementação
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
Dentro do arquivo:

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
