Un **Makefile** en C sirve para automatizar la compilación de tus programas.

Aquí tienes un ejemplo básico de `Makefile` para un proyecto en C:

```makefile
# Nombre del compilador
CC = cc

# Flags de compilación (opcional: -Wall muestra advertencias)
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente
SRC = main.c funciones.c

# Archivos objeto (se generan a partir de los .c)
OBJ = $(SRC:.c=.o)

# Nombre del ejecutable
EXEC = programa

# Regla por defecto (lo que se ejecuta si solo haces "make")
all: $(EXEC)

# Cómo generar el ejecutable a partir de los .o
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Cómo generar un .o a partir de un .c
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Limpieza (borra objetos y ejecutable)
clean:
	rm -f $(OBJ) $(EXEC)
```

---

### ¿Cómo usarlo?

1. Guarda esto en un archivo llamado `Makefile` (sin extensión).
2. En la terminal, en la carpeta del proyecto:

   * `make` → compila el programa.
   * `make clean` → borra archivos generados.
   * `./programa` → ejecuta el programa compilado.

---

👉 ¿Quieres que te arme uno **genérico** (para cualquier cantidad de `.c`) o uno **adaptado a un proyecto específico** que ya tengas (con nombres de archivos concretos)?

Perfecto 🙌
Aquí te dejo un **Makefile genérico** que sirve para **cualquier proyecto en C** sin tener que ir editando los nombres de los `.c`:

```makefile
# Compilador
CC = cc

# Flags de compilación (puedes quitar -g si no quieres debug)
CFLAGS = -Wall -Werror -Wextra

# Busca todos los archivos .c en el directorio actual
SRC = $(wildcard *.c)

# Convierte cada .c en su .o correspondiente
OBJ = $(SRC:.c=.o)

# Nombre del ejecutable (igual al nombre de la carpeta actual)
EXEC = $(notdir $(CURDIR))

# Regla principal
all: $(EXEC)

# Compila el ejecutable a partir de los .o
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Regla para compilar cada .c a .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpieza
clean:
	rm -f $(OBJ) $(EXEC)

# Limpieza total (incluye backups temporales)
mrproper: clean
	rm -f *~ 
```

---

### ✅ Características:

* Detecta **automáticamente todos los `.c`** en el directorio.
* Genera el ejecutable con el **nombre de la carpeta** (ej: si la carpeta se llama `proyecto`, el binario será `proyecto`).
* Tiene `make clean` y `make mrproper` para limpiar objetos y temporales.

---

```makefile
# Nombre del compilador
CC = cc

# Flags de compilación. -I indica donde estan las cabeceras
CFLAGS = -Wall -Werror -Wextra -I includes

# Archivos fuente
SRCS = $(wildcard srcs/*.c)
#SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c

# Archivos objeto (se generan a partir de los .c)
OBJS = $(SRCS:.c=.o)

# Nomre de la libreria
NAME = libft.a

# Regla por defecto (lo que se ejecuta si solo haces "make")
all: $(NAME)

# Crear la librería estática
$(NAME): $(OBJS)
	ar rcs $@ $^ 

# Compilar cada .c a .o
srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar objetos
clean:
	rm -f $(OBJS)

# Limpiar objetos y librería
fclean: clean
	rm -f $(NAME)

# Recompilación completa
re: fclean all
```

## con tests

```makefile
# Nombre del compilador
CC = cc

# Flags de compilación (opcional: -Wall muestra advertencias)
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente
SRC = main.c ft_range.c

# Archivos objeto (se generan a partir de los .c)
OBJ = $(SRC:.c=.o)

# Nombre del ejecutable
EXEC = programa

# Regla por defecto (lo que se ejecuta si solo haces "make")
all: $(EXEC)

# Cómo generar el ejecutable a partir de los .o
$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Cómo generar un .o a partir de un .c
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Limpieza (borra objetos y ejecutable)
clean:
	rm -f $(OBJ) $(EXEC)

# Limpieza (borra ejecutable)
fclean:
	rm -f $(EXEC)

# Limpieza (borra ejecutable)
oclean:
	rm -f $(OBJ)

test:
	./$(EXEC)
	./$(EXEC) 1 5
	./$(EXEC) 5 1
	./$(EXEC) -3 1
	./$(EXEC) 4
```