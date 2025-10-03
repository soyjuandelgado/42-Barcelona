¡Perfecto! Te guío paso a paso para instalar **Norminette (42)** en **WSL (Windows Subsystem for Linux)**.

Norminette es el linter oficial de la **42 Network** que verifica si tu código en C cumple con la norma.

---

## 🔧 Pasos para instalar Norminette en WSL

### 1. Actualiza tus paquetes

Abre tu terminal de **WSL** y ejecuta:

```bash
sudo apt update && sudo apt upgrade -y
```

---

### 2. Instala **Python3** y **pip3**

Norminette funciona con Python, así que asegúrate de tenerlo instalado:

```bash
sudo apt install python3 python3-pip -y
```

Verifica que todo esté bien instalado:

```bash
python3 --version
pip3 --version
```

---

### 3. Instala **Norminette** con pip

Ejecuta:

```bash
pip3 install norminette
```

---

### 4. Verifica la instalación

Comprueba que funciona con:

```bash
norminette -v
```

Te debería mostrar la versión instalada. ✅

---

### 5. Uso básico

Para chequear tus archivos `.c` y `.h`:

```bash
norminette archivo.c
```

O para analizar todos los archivos del proyecto:

```bash
norminette *
```

---

## 🚨 Posibles problemas comunes

1. **El comando `norminette` no se encuentra:**
   Puede ser que pip lo haya instalado en un directorio que no está en tu PATH. Solución:

   ```bash
   python3 -m pip install --upgrade pip
   python3 -m pip install norminette
   ```

   Y si sigue sin funcionar, prueba:

   ```bash
   python3 -m norminette archivo.c
   ```

2. **Error de permisos en pip:**
   Si no usaste `sudo`, vuelve a instalar con:

   ```bash
   sudo pip3 install norminette
   ```

---

¿Quieres que te prepare también un **alias en tu `.bashrc`/`.zshrc`** para que siempre esté disponible el comando `norminette` en WSL, aunque pip lo instale en una ruta rara?

Perfecto 👌 te muestro cómo dejar **Norminette** listo en tu **WSL** para que no tengas que preocuparte de rutas raras:

---

## 🔧 Crear un alias para `norminette`

1. Abre tu archivo de configuración de la shell (según uses **bash** o **zsh**):

   ```bash
   nano ~/.bashrc
   ```

   o si usas **zsh**:

   ```bash
   nano ~/.zshrc
   ```

---

2. Al final del archivo pega esta línea:

   ```bash
   alias norminette='python3 -m norminette'
   ```

   > Esto asegura que aunque `norminette` no esté en el PATH, el comando siempre funcionará.

---

3. Guarda el archivo (`CTRL + O`, Enter, y luego `CTRL + X` en nano).

---

4. Recarga la configuración:

   ```bash
   source ~/.bashrc
   ```

   o

   ```bash
   source ~/.zshrc
   ```

---

5. Ahora prueba:

   ```bash
   norminette -v
   ```

   ✅ Deberías ver la versión de norminette y ya lo tendrás siempre disponible.

---

👉 ¿Quieres que además te muestre cómo hacer que **Norminette se actualice automáticamente** cada vez que abras WSL, para no tener que instalar manualmente las nuevas versiones?


¡Muy buena pregunta! 🔧
En Linux (y por tanto en **WSL**) la variable `PATH` indica en qué directorios busca el sistema los ejecutables (como `gcc`, `python3`, `norminette`, etc.).

Si `norminette` se instaló pero no se encuentra al escribir el comando, es probable que pip lo haya puesto en un directorio que no está en tu `PATH`.

---

## 🔍 Ver dónde se instaló norminette

Ejecuta:

```bash
pip3 show norminette
```

Busca la línea que diga `Location:` → ahí estarán los binarios, normalmente algo como:

```
~/.local/bin
```

---

## 🛠️ Agregar ese directorio a tu PATH

1. Edita tu archivo de configuración de la shell (**bash** o **zsh**):

   ```bash
   nano ~/.bashrc
   ```

   o

   ```bash
   nano ~/.zshrc
   ```

2. Al final del archivo agrega:

   ```bash
   export PATH=$PATH:~/.local/bin
   ```

   > Sustituye `~/.local/bin` por la ruta real si era distinta.

3. Guarda (CTRL+O, Enter, CTRL+X).

4. Recarga tu configuración:

   ```bash
   source ~/.bashrc
   ```

   o

   ```bash
   source ~/.zshrc
   ```

---

## ✅ Verifica

Ahora prueba:

```bash
norminette -v
```

Si todo salió bien, te mostrará la versión.

---

👉 ¿Quieres que te muestre un comando rápido que automáticamente detecte dónde pip instala los binarios y actualice tu `PATH` sin que tengas que buscarlo manualmente?
