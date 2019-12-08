# Cómo subir un proyecto local a github.
### Desde la web de github
Creamos un nuevo repositorio en <https://github.com>. Le damos nombre, descripción, seleccionamos si va a ser un proyecto público o privado si es el caso, y dejamos el check de crear README sin marcar.
Le damos a __crear repositorio__ y con esto ya tenemos el repositorio donde alojaremos nuestro proyecto.
### Desde la terminal del equipo donde está el proyecto que queremos subir a github
Nos vamos a la carpeta del proyecto y ejecutamos estos comandos.
```
git init

git add .

git commit -m "Git : Cómo subir un proyecto local a github"

git remote add origin https://github.com/hceballos/git

git push -u origin master

```
