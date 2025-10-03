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
