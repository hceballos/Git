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

ó

git push
```

En caso de error :
# fatal: remoto origin ya existe.

hay 2 opciones:
1)ELEMINAR UN REMOTO
2)RENOMBRAR UN REMOTO



### ELEMINAR UN REMOTO
```$ git remote -v```
# Ver los remotos actuales
> origin https://github.com/hceballos/git (fetch)
> origin https://github.com/hceballos/git (push)
> destination https://github.com/hceballos/git (fetch)
> destination https://github.com/hceballos/git (push)
```$ git remote rm destination```
# Eliminar remoto
```$ git remote -v```
# Verificar que se haya ido
> origin https://github.com/hceballos/git (fetch)
> origin https://github.com/hceballos/git (push)


### RENOMBRAR UN REMOTO
```$ git remote -v```
# Ver remotos existentes
> origin https://github.com/hceballos/git (fetch)
> origin https://github.com/hceballos/git (push)

```$ git remote rename origin destination```
# Cambiar el nombre del remoto de 'origen' a 'destino'

```$ git remote -v```
# Verificar el nombre nuevo del remoto
> destination https://github.com/hceballos/git (fetch)
> destination https://github.com/hceballos/git (push)
