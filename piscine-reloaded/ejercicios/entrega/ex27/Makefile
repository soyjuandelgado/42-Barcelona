# Nombre del compilador
CC = cc

# Flags de compilación. -I indica donde estan las cabeceras
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente
SRCS = $(wildcard *.c)

# Archivos objeto (se generan a partir de los .c)
OBJS = $(SRCS:.c=.o)

# Nombre del ejecutable
EXEC = ft_display_file

# Regla por defecto (lo que se ejecuta si solo haces "make")
all: $(EXEC)

# Crear el ejecutable
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

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
