# Apuntes

## Shell

En **bash** puedes crear un archivo de exactamente **4 bytes** de varias formas. Aquí tienes algunas opciones:

### 1. Con `dd`

```bash
dd if=/dev/zero of=archivo.bin bs=4 count=1
```

👉 Esto crea un archivo llamado `archivo.bin` con 4 bytes en cero (`0x00 0x00 0x00 0x00`).

---

### 2. Con `truncate`

```bash
truncate -s 4 archivo.bin
```

👉 Crea un archivo de tamaño 4 bytes (rellenado con huecos, pero en disco ocupa 4).

---

### 3. Con `printf`

```bash
printf 'ABCD' > archivo.txt
```

👉 Escribes exactamente 4 caracteres (en ASCII, cada carácter = 1 byte).

---

### 4. Con `head`

```bash
head -c 4 /dev/urandom > archivo.bin
```

👉 Crea un archivo de 4 bytes con contenido aleatorio.


### Establecer una fecha/hora específica
touch -t 202201011230 archivo.txt

touch -d 202201011230 archivo.txt

para un link se agrega -h

En **bash/Linux** puedes cambiar la fecha (marca de tiempo) de un archivo usando el comando **`touch`**.

### 1. Cambiar a la fecha/hora actual

```bash
touch archivo.txt
```

👉 Actualiza la fecha de **último acceso** y **modificación** al momento actual.

---

### 2. Establecer una fecha/hora específica

```bash
touch -t 202201011230 archivo.txt
```

👉 Formato: `[[CC]YY]MMDDhhmm[.ss]`

* `2022` → año
* `01` → mes (enero)
* `01` → día
* `1230` → hora\:minutos
* (opcional) `.45` → segundos

Ejemplo: `202201011230.45` = **1 de enero de 2022, 12:30:45**

---

### 3. Copiar la fecha de otro archivo

```bash
touch -r referencia.txt archivo.txt
```

👉 `archivo.txt` tendrá la misma fecha que `referencia.txt`.



