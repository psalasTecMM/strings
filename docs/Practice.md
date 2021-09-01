
# Practice \# 1: Formal Languages and String

## Objective

Implementation of the basics operations for string manipulation, such as

-   Alphabet

-   Length

-   Concatenation

-   Pow

-   Inverse

-   Occurrences

-   Equality

## Problem description 

The student must implement the basic operations for string manipulation.

### Alphabet of a string 

The alphabet of a string <img style="transform: translateY(0.1em); background: transparent;" src="svg/w.svg"> is the set of symbols used to form <img style="transform: translateY(0.1em); background: transparent;" src="svg/w.svg"> ,
denoted by <img style="transform: translateY(0.1em); background: transparent;" src="svg/Sigma.svg">
That is if <img style="transform: translateY(0.1em); background: transparent;" src="svg/wsequence.svg"> then <img style="transform: translateY(0.1em); background: transparent;" src="svg/alphabet.svg">
for all <img style="transform: translateY(0.1em); background: transparent;" src="svg/ninN.svg">.

### Length of a string 

The length of a string <img style="transform: translateY(0.1em); background: transparent;" src="svg/w.svg"> is the number of symbols that occur in <img style="transform: translateY(0.1em); background: transparent;" src="svg/w.svg"> ,
denoted by <img style="transform: translateY(0.1em); background: transparent;" src="svg/lw.svg">
That is if <img style="transform: translateY(0.1em); background: transparent;" src="svg/wsequence.svg"> then <img style="transform: translateY(0.1em); background: transparent;" src="svg/length.svg">.

### Concatenation of strings 

Given two strings <img style="transform: translateY(0.1em); background: transparent;" src="svg/w.svg">  and <img style="transform: translateY(0.1em); background: transparent;" src="svg/v.svg">, the concatenation of strings makes a new
string <img style="transform: translateY(0.1em); background: transparent;" src="svg/wv.svg"> by putting them together end to end.

- If <img style="transform: translateY(0.1em); background: transparent;" src="svg/wsequence.svg"> and <img style="transform: translateY(0.1em); background: transparent;" src="svg/vsequence.svg">, then <img style="transform: translateY(0.1em); background: transparent;" src="svg/wvsequence.svg">

- <img style="transform: translateY(0.1em); background: transparent;" src="svg/modularity.svg">

- <img style="transform: translateY(0.1em); background: transparent;" src="svg/neutro.svg">

### Pow of a string 

Let <img style="transform: translateY(0.1em); background: transparent;" src="svg/wstring.svg"> y <img style="transform: translateY(0.1em); background: transparent;" src="svg/ninN.svg">. <img style="transform: translateY(0.1em); background: transparent;" src="svg/wn.svg"> denote the string we
obtain by concatenating <img style="transform: translateY(0.1em); background: transparent;" src="svg/n.svg"> copies of <img style="transform: translateY(0.1em); background: transparent;" src="svg/w.svg"> : <div align="center"><img style="transform: translateY(0.1em); background: transparent;" src="svg/pow.svg"></div>

### Inverse of a string 

The **inverse** of a string <img style="transform: translateY(0.1em); background: transparent;" src="svg/wsequence.svg"> is the string <img style="transform: translateY(0.1em); background: transparent;" src="svg/wI.svg"> defined by the rule:

<div align="center"><img style="transform: translateY(0.1em); background: transparent;" src="svg/inverse.svg"></div>

### Occurrences of a string 

Let <img style="transform: translateY(0.1em); background: transparent;" src="svg/asymbol.svg"> and <img style="transform: translateY(0.1em); background: transparent;" src="svg/wstring.svg">, then <img style="transform: translateY(0.1em); background: transparent;" src="svg/aw.svg"> is the number of <img style="transform: translateY(0.1em); background: transparent;" src="svg/a.svg">'s in <img style="transform: translateY(0.1em); background: transparent;" src="svg/w.svg"> 

### Equality of strings 

Given two strings <img style="transform: translateY(0.1em); background: transparent;" src="svg/wsequence.svg"> and <img style="transform: translateY(0.1em); background: transparent;" src="svg/vsequence.svg">, we
say that the strings are **equal** <img style="transform: translateY(0.1em); background: transparent;" src="svg/equal.svg">, if <img style="transform: translateY(0.1em); background: transparent;" src="svg/nm.svg"> and <img style="transform: translateY(0.1em); background: transparent;" src="svg/ab.svg"> for all <img style="transform: translateY(0.1em); background: transparent;" src="svg/in.svg">

## General guidelines 

### Implementation design:  

The student must create each of the operations described above as a function. The student should properly document any alternative solution.

### Files
The student must create a header file for function prototypes and a source file for function implementations.

The header file with extension ***.h*** should look like:

```c
#ifndef NAME_H //The student should change NAME for the file name
#define NAME_H

/*
* C prototypes
* Example
*/

/* Sum prototype, it takes two int arguments and
returns an int
*/
int sum (int,int); 

...
#endif
```

The source file with extension ***.c*** should look like:

```c
#include "name.h" //Importing the header file
/* Sum implementation, it takes two int arguments and returns an int
*/
int sum (int a,int b){
    return a+b; 
}
...
```
The student must also modify the main.c file by importing the header file:

```c
#include <unistd.h> 
#include <stdio.h> 
#include <stdlib.h>
// Add your library file
// Example: #include "strings.h"
#include "name.h" //Importing the header file
...
```

### Funtions
The student must create each function using the following prototypes.

### Alphabet function prototype: 

The function must receive a string as an array of chars and return the
alphabet as an array of chars


```c
char* alphabet(char* w);
```


### Length function prototype: 

The function must receive a string as an array of chars and return the
length of a string as an integer number


```c
int len(char* w);
```


### Concatenation function prototype: 

The function must receive two strings as an array of chars and return
the concatenation as an array of chars


```c
char* concat(char* w,char* v);
```


### Pow function prototype: 

The function must receive a string as an array of chars and the pow as
an integer and return the pow of the string as an array of chars


```c
char* pow(char* w,int n);
```


### Inverse function prototype: 

The function must receive a string as an array of chars and return the
inverse as an array of chars


```c
char* inverse(char* w);
```


### Occurrences function prototype: 

The function must receive a symbol as a char and a string as an array of
chars and return the occurrences of the symbol in the string as an
integer number


```c
int occurrences(char a,char* w);
```


### Equality function prototype: 

The function must receive two strings as an array of chars and return if
the two strings are equal or not as an integer. 0 if the strings are
different and 1 if the strings are equal.


```c
int equal(char* w,char* v);
```


## Implementation Language: 

The programming language to use is C.

- The use of libraries for string manipulation such as string.h or others, is restricted.

- The use of the string data type is restricted

- Each function must be developed from scratch, using only control
    statements and data structures.

-   The student must use memory management correctly:

    -   To create a memory slot in C use `malloc`
        ```c
        char* result = (char*)malloc(10*sizeof(char));
        ```
    - To create a memory slot of 10 pieces of 1 byte in C use `calloc`.
        ```c
        char* result = (char*)calloc(10*sizeof(char));
        ```

    -   To delete a memory space in C use `free`
        ```c
        free(result);
        ```

## Evaluation requirements 

1.  **Verification**: The functions will be tested automatically in Github using unit tests. It will be expected to pass all the test cases; otherwise, the grade will be lower.

1. ***Feedback***: The student will get feedback about the code at all time, it is recommended to address the comments since the grade could be higher.

2.  **Report**: The student must elaborate a report with the format seen
    in the first class. The student should report

    1.  The decisions made for each section (techniques, data types, data structures, findings, and so on)

    2.  The problems that the student faced with the practice and the proposed solutions.

## Testing
In order to test the code the student could use one of the following approaches:

- Create their own main.c file where they can test the examples below.
***NOTE: Do not send this main.c file to GitHub since all the tests will fail.***

- Use the provided main.c to compile the code and running the application. To compile the code use

```sh
gcc main.c name.c -o strings
```

or

```sh
make
```

To run the application use `./strings` follow by an option:
- `./strings -a` -- Alphabet
- `./strings -l` -- Length
- `./strings -c` -- Concatenation 
- `./strings -p` -- Pow
- `./strings -i` -- Inverse
- `./strings -o` -- Occurrences
- `./strings -e` -- Equality


## Examples 

1.  Alphabet of a string
    ```c
    printf("%s",alphabet("686f6c61")); //"68fc1"
    ```

2.  Length of a string
    ```c
    printf("%d",len("686f6c61")); //8
    ```

3.  Concatenation of strings
    ```c
    printf("%s",concat("686f6c61","206d756e646f")); //"686f6c61206d756e646f"
    ```

4.  Pow of a string
    ```c
    printf("%s",pow("6d756e646f",3)); //"6d756e646f6d756e646f6d756e646f"
    ```

5.  Inverse of a string
    ```c
    printf("%s",inverse("evausabarimel")); //"lemirabasuave"
    ```

6.  Occurrences of a string
    ```c
    printf("%d",ocurrences('6',"686f6c61")); //4
    ```

7.  Equality of strings
    ```c
    printf("%d",equal("Hola","hola")); //0
    ```
