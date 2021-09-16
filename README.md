![banner-github](https://user-images.githubusercontent.com/55462130/133696467-f055313a-4cb1-4e24-974a-062ca7e588a8.png)
# Libft
Uma implementação pessoal de algumas das funções da biblioteca padrão do C.
## O que é a libft

Libft é um dos muitos projetos da [42SP](https://www.42sp.org.br), nesse projeto precisamos re-criar algumas das funções da biblioteca padrão do C, a libc.
Usaremos as funções criadas nessa biblioteca em todos os outros projetos durante a graduação. Esse projeto tem como proposta fazer os alunos entenderem o básico de estruturas de dados e algoritmos.

## Testando a implementação
Durante o desenvolvimento desse projeto foram utilizados os testes da biblioteca [Libft war machine](https://github.com/ska42/libft-war-machine). Existem outras ótimas opções de teste para a Libft porém aqui só iremos cobrir a instalação/configuração da war machine.
1. Clone o repositório da Libft.
```
git clone https://github.com/Gabriel-Jeronimo/libft.git
```
2. Clone o repositório da libft-war-machine.
```
	git clone https://github.com/ska42/libft-war-machine.git
```
3. Gere o arquivo de configuração.
```
	cd libft-war-machine
	bash grademe.sh
```
4. Altere o PATH_LIBFT no my_config.sh.
```
nano my_config.sh

Dentro do arquivo:

#!/bin/bash

###################################
#     Mandatory configuration     #
###################################

#Edit the next line with the path of your libft project.
PATH_LIBFT=caminho_da_libft
```

5. Rode o script de teste
```
bash grademe.sh
```
