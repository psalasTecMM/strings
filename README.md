# strings

## To get the code use

1. Click on the green button 'Code'
1. And copy the url to use `git clone`
1. Or download the zip

## To develop

Create header and source files to complete the tasks in the [docs](docs/Practice.md)

## To compile

Make sure you have building tools like gcc and make as minimum

Then just run
```sh
$ make
```
or create your own compilation by running

```sh
$ gcc main.c <source files> -o <application name>
```

### Example
```sh
gcc main.c strings.c -o strings
```

## To run the application

The `main.c` file uses getOpt to get the args from commandline

It expects one of the following options:
* `-a` for testing the `alphabet` function
* `-l` for testing the `len` function
* `-c` for testing the `concat` function
* `-p` for testing the `spow` function
* `-i` for testing the `inverse` function
* `-o` for testing the `occurrences` function
* `-e` for testing the `equal` function

Run the application by using 
```sh
./strings <option>
```
Below there are examples about how the program will run, the strings above the line 
```sh 
------
``` 
are inputs, the strings below the line are outputs.

It will run as follow:
* `-a` asks for a string
```bash
./strings -a
aaasd
--------
asd
```
* `-l` asks for two strings separated by comma
```bash
./strings -l
asd a
-------
3 1
```
* `-c` asks for a number which indicates how many pairs of string to concatenate and the pairs of strings, the number and the pairs must be separated by `\n`
```bash
./strings -c
2
Hola mundo
Ha ppy
--------
Holamundo
Happy
```
* `-p` asks for a string
```bash
./strings -p
aab
--------
aabaabaab

```
* `-i` asks for a string
```bash
./strings -i
abab
--------
baba
```
* `-o` ask for a string an 3 symbols
```bash
./strings -o
hola o l j
--------
1 1 0
```
* `-e` asks for a number which indicates how many pairs of string to compare and the pairs of strings, the number and the pairs must be separated by `\n`
```bash
./strings -e
3
Hola hola
Ha ppy
a a
--------
1
1
0
```







