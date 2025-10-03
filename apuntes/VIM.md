¡Perfecto! Aquí tienes una **tarjeta resumen de comandos básicos de Vim** para que la uses como chuleta rápida:

---

# 📝 Tarjeta Resumen Vim

## 🔹 Modo de trabajo

* `i` → Insertar antes del cursor
* `a` → Insertar después del cursor
* `o` → Nueva línea debajo e insertar
* `O` → Nueva línea arriba e insertar
* `Esc` → Volver a modo normal

---

## 🔹 Guardar y salir

* `:w` → Guardar
* `:q` → Salir
* `:q!` → Salir sin guardar
* `:wq` o `ZZ` → Guardar y salir
* `:x` → Guardar y salir (solo si hay cambios)

---

## 🔹 Movimiento del cursor

* `h` → Izquierda
* `l` → Derecha
* `0` → Inicio de línea
* `^` → Primer carácter no vacío de la línea
* `$` → Fin de línea
* `w` → Palabra siguiente
* `e` → Final de palabra
* `b` → Inicio de palabra
* `gg` → Ir al inicio del archivo
* `G` → Ir al final del archivo
* `:n` → Ir a la línea *n*

---

## 🔹 Edición

* `x` → Borrar carácter bajo el cursor
* `dw` → Borrar hasta el final de la palabra
* `dd` → Borrar línea
* `D` → Borrar hasta el final de la línea
* `yy` → Copiar línea
* `p` → Pegar después del cursor
* `P` → Pegar antes del cursor
* `u` → Deshacer
* `Ctrl + r` → Rehacer

---

## 🔹 Búsqueda y reemplazo

* `/texto` → Buscar hacia adelante
* `?texto` → Buscar hacia atrás
* `n` → Siguiente resultado
* `N` → Resultado anterior
* `:%s/viejo/nuevo/g` → Reemplazar en todo el archivo
* `:s/viejo/nuevo/g` → Reemplazar en la línea actual

---

## 🔹 Visual

* `v` → Selección visual (carácter a carácter)
* `V` → Selección visual por líneas
* `Ctrl + v` → Selección en bloque
* `y` → Copiar selección
* `d` → Cortar selección
* `p` → Pegar

---

:set number
mostrar numeros de linea
