¡Perfecto! Te explico las funciones básicas de **manejo de archivos** en **C**:

---

### 1. `open()`

Sirve para **abrir un archivo**.
Está definida en `<fcntl.h>` o `<sys/types.h>` y `<sys/stat.h>`.

```c
int open(const char *pathname, int flags, mode_t mode);
```

* **`pathname`** → nombre del archivo.
* **`flags`** → cómo quieres abrir el archivo:

  * `O_RDONLY` → solo lectura.
  * `O_WRONLY` → solo escritura.
  * `O_RDWR`   → lectura y escritura.
  * `O_CREAT`  → crear archivo si no existe.
  * `O_APPEND` → escribir al final del archivo.
  * `O_TRUNC`  → borrar contenido previo.
* **`mode`** → permisos (ej: `0644`), solo se usa si se crea un archivo.
* **Devuelve** un **descriptor de archivo** (un número entero ≥ 0 si tuvo éxito, -1 si falla).

Ejemplo:

```c
int fd = open("archivo.txt", O_CREAT | O_WRONLY, 0644);
```

---

### 2. `read()`

Lee datos de un archivo ya abierto.

```c
ssize_t read(int fd, void *buf, size_t count);
```

* **`fd`** → descriptor de archivo (devuelto por `open`).
* **`buf`** → buffer donde se almacenan los datos leídos.
* **`count`** → número máximo de bytes a leer.
* **Devuelve** la cantidad de bytes leídos (0 si es fin de archivo, -1 si hay error).

Ejemplo:

```c
char buffer[100];
int bytes = read(fd, buffer, sizeof(buffer));
```

---

### 3. `write()`

Escribe datos en un archivo abierto.

```c
ssize_t write(int fd, const void *buf, size_t count);
```

* **`fd`** → descriptor de archivo.
* **`buf`** → datos a escribir.
* **`count`** → número de bytes a escribir.
* **Devuelve** la cantidad de bytes escritos (-1 si hay error).

Ejemplo:

```c
char *texto = "Hola mundo\n";
write(fd, texto, strlen(texto));
```

---

### 4. `close()`

Cierra un archivo abierto.

```c
int close(int fd);
```

* **`fd`** → descriptor del archivo.
* **Devuelve** 0 si tiene éxito, -1 si hay error.
* Es importante usarlo para liberar recursos del sistema.

Ejemplo:

```c
close(fd);
```

---

✅ **Ejemplo completo:**

```c
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main() {
    int fd = open("ejemplo.txt", O_CREAT | O_WRONLY, 0644);
    if (fd < 0) {
        perror("Error al abrir el archivo");
        return 1;
    }

    char *texto = "Hola desde C!\n";
    write(fd, texto, strlen(texto));

    close(fd);

    // Ahora lo abrimos en modo lectura
    fd = open("ejemplo.txt", O_RDONLY);
    char buffer[50];
    int bytes = read(fd, buffer, sizeof(buffer)-1);
    buffer[bytes] = '\0';

    printf("Contenido leído: %s", buffer);

    close(fd);
    return 0;
}
```

---

¿Quieres que te haga también un **diagrama paso a paso** (cómo el SO maneja open → read/write → close), o prefieres solo ejemplos en código?

