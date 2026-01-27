*Este proyecto ha sido creado como parte del currículo de 42 por* ***smilla-c.***

# libft

## Descripción

**libft** es un proyecto del currículo de la escuela 42 que consiste en la creación de una biblioteca en C. El objetivo es reimplementar funciones básicas de la biblioteca estándar, junto con funciones adicionales para la manipulación de cadenas, memoria, conversión de tipos y listas enlazadas. Esta biblioteca está diseñada para ser reutilizada en proyectos posteriores.

## Instrucciones

### Compilación

```bash
make
```
Esto generará la librería libft.a.

### Uso

Incluye el header y enlaza la librería:
```
#include "libft.h"
```
Ejemplo de compilacion:
```
cc main.c -L. -lft
```
### Limpieza
```
make clean
make fclean
make re
```

## Funciones incluidas
**Caracteres y cadenas:**

ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

ft_toupper, ft_tolower

ft_strlen, ft_strlcpy, ft_strlcat

ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr

ft_strdup

**Memoria:**

ft_memset, ft_bzero, ft_memcpy, ft_memmove

ft_memchr, ft_memcmp, ft_calloc

**Conversión:**

ft_atoi, ft_itoa

**Funciones adicionales:**

ft_substr, ft_strjoin, ft_strtrim

ft_split, ft_strmapi, ft_striteri

ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

**Listas enlazadas:**

ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast

ft_lstadd_back, ft_lstdelone, ft_lstclear

ft_lstiter, ft_lstmap

### Recursos

Manuales de C (man 3)

Documentación oficial de 42

**Uso de IA:**

La IA se ha utilizado únicamente como apoyo teórico y para la redacción de documentación.


