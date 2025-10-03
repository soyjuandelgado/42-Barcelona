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