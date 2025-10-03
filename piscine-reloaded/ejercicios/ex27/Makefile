# Nombre del compilador
CC = cc

# Flags de compilación. -I indica donde estan las cabeceras
CFLAGS = -Wall -Werror -Wextra -I includes

# Archivos fuente
SRCS = $(wildcard srcs/*.c)
#SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c

# Archivos objeto (se generan a partir de los .c)
OBJS = $(SRCS:.c=.o)

# Nombre del ejecutable
EXEC = programa

# Regla por defecto (lo que se ejecuta si solo haces "make")
all: $(EXEC)

# Crear la librería estática
$(EXEC): $(OBJS)
	ar rcs $@ $^ 

# Compilar cada .c a .o
srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpiar objetos
clean:
	rm -f $(OBJS)

# Limpiar objetos y librería
fclean: clean
	rm -f $(EXEC)

# Recompilación completa
re: fclean all






























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
