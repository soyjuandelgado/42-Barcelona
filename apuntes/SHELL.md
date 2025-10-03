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



### Autenticacion GitHub

Ese error te aparece porque **GitHub ya no permite autenticación con usuario/contraseña en operaciones `git push`**.
Ahora necesitas usar un **token personal (PAT)** o **SSH**. Te explico cómo resolverlo:

---

### ✅ Opción 1: HTTPS con token personal

1. Entra a tu cuenta de GitHub → [Tokens](https://github.com/settings/tokens)
   (mejor: **"Fine-grained personal access tokens"**).

2. Crea un token con permisos de:

   * `repo` (acceso completo al repo privado/público).
   * `workflow` (si necesitas actions).

3. Copia el token (solo se muestra una vez).

4. Cambia el **remote** de tu repo local para usar el token:

   ```bash
   git remote set-url origin https://<TU_TOKEN>@github.com/soyjuandelgado/42-Barcelona.git
   ```

   > Ojo: sustituye `<TU_TOKEN>` por el token (no pongas tu usuario).

5. Prueba el push:

   ```bash
   git push origin main
   ```

---

### ✅ Opción 2: Autenticación SSH (recomendada)

1. Genera una clave SSH (si no tienes):

   ```bash
   ssh-keygen -t ed25519 -C "tu_email@ejemplo.com"
   ```

   (Presiona enter para la ruta por defecto, y pon passphrase si quieres más seguridad).

2. Copia la clave pública:

   ```bash
   cat ~/.ssh/id_ed25519.pub
   ```

3. Ve a GitHub → Settings → **SSH and GPG keys** → "New SSH key" → pega la clave.

4. Cambia el remote para usar SSH:

   ```bash
   git remote set-url origin git@github.com:soyjuandelgado/42-Barcelona.git
   ```

5. Verifica conexión:

   ```bash
   ssh -T git@github.com
   ```

6. Haz push:

   ```bash
   git push origin main
   ```

---

👉 Pregunta: ¿quieres que te guíe paso a paso para configurarlo con **token** (más rápido) o con **SSH** (más seguro y a largo plazo)?


### Imprimir cabecera

en vim: 
:Stdheader
ESC fn+f1

  GNU nano 6.2                  /home/juadelga/.vimrc                           
let g:user42 = 'juadelga'
let g:mail42 = 'juadelga@student.42barcelona.com'
set tabstop=4
set noexpandtab
set softtabstop=4


  GNU nano 6.2                  /home/juadelga/.zshrc                           
# Lines configured by zsh-newuser-install
HISTFILE=~/.histfile
HISTSIZE=1000
SAVEHIST=1000
# End of lines configured by zsh-newuser-install
# The following lines were added by compinstall
zstyle :compinstall filename '/home/juadelga/.zshrc'

autoload -Uz compinit
compinit
# End of lines added by compinstall

export USERNAME="juadelga"
export EMAIL="juadelga@student.42barcelona.com"
export MAIL="juadelga@student.42barcelona.com"


