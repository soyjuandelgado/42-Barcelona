## Cambiar usuario GitHub en WSL

Para eliminar el usuario actual de GitHub cuando usas autenticación por SSH y cambiarlo por otro, hay que trabajar tanto con las llaves SSH locales como en la configuración de tu cuenta en GitHub. El proceso correcto es el siguiente:[2][5][8]

### 1. Elimina las llaves SSH locales antiguas

- Abre la terminal y ve a la carpeta de llaves:
  ```
  cd ~/.ssh
  ```
- Borra las llaves vinculadas al usuario anterior (normalmente id_rsa, id_ed25519, u otros nombres personalizados):
  ```
  rm id_rsa id_rsa.pub
  rm id_ed25519 id_ed25519.pub
  ```

### 2. Elimina la llave pública desde GitHub

- Ingresa en GitHub: **Settings** > **SSH and GPG keys**.
- Borra la(s) SSH Key(s) asociadas al usuario anterior.[8][2]

### 3. Crea la nueva llave SSH para el usuario nuevo

- Genera una llave SSH nueva (usa tu nuevo correo de GitHub):
  ```
  ssh-keygen -t ed25519 -C "nuevo@email.com"
  ```
  Confirma ruta y passphrase si se solicita.

### 4. Añade la nueva clave privada al agente ssh

- Inicializa y añade la nueva llave:
  ```
  eval "$(ssh-agent -s)"
  ssh-add ~/.ssh/id_ed25519
  ```

### 5. Registra la llave pública en GitHub

- Copia la nueva clave pública:
  ```
  cat ~/.ssh/id_ed25519.pub
  ```
- Pega ese contenido en **Settings** > **SSH and GPG keys** > **New SSH key** en la cuenta del nuevo usuario GitHub.

### 6. Verifica la conexión con el nuevo usuario

- Comprueba autenticación:
  ```
  ssh -T git@github.com
  ```
  Debes ver el saludo a tu nuevo usuario.

### 7. Opcional: Cambia URL del remoto

- Si tus repos locales usaban una URL vinculada al usuario anterior, actualízala:
  ```
  git remote set-url origin git@github.com:nuevo-usuario/repositorio.git
  ```

Este proceso elimina por completo la vinculación del usuario anterior y te permite operar en GitHub con el nuevo usuario y llave SSH, sin dejar rastros previos en tu máquina ni en tu cuenta.[5][2][8]

[1](https://docs.github.com/es/enterprise-server@3.15/admin/managing-accounts-and-repositories/managing-users-in-your-enterprise/deleting-users-from-your-instance)
[2](https://docs.github.com/es/authentication/keeping-your-account-and-data-secure/reviewing-your-ssh-keys)
[3](https://ugeek.github.io/blog/post/2023-05-06-ssh-eliminar-la-clave-del-host-en-un-servidor-remoto.html)
[4](https://es.stackoverflow.com/questions/468160/git-github-el-commit-por-ssh-aparece-hecho-por-otra-cuenta)
[5](https://www.reddit.com/r/git/comments/1am37dg/need_to_remove_remnants_of_all_old_github/)
[6](https://www.ionos.es/digitalguide/paginas-web/desarrollo-web/ssh-key-con-github/)
[7](https://docs.github.com/es/authentication/connecting-to-github-with-ssh/managing-deploy-keys)
[8](https://platzi.com/discusiones/1557-git-github/115507-alguien-sabe-como-eliminar-las-llaves-ssh-es-que-siempre-despues-de-una-clase-me-gusta-practicar-los-comandos-pero-esta-vez-no-se-como/)
[9](https://www.youtube.com/watch?v=mb4rCPa5KVc)
[10](https://www.reddit.com/r/git/comments/xykwrm/noob_question_how_do_i_stop_git_push_from_asking/)