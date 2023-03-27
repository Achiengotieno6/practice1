# _printf

### Author: Bobby Yang && Elaine Yeung (Batch 2)uthor: Bobby Yang && Elaine Yeung (Batch 2)

## Synopsis
This is a custom implementation of `printf` from the standard library `<stdio.h>`. This project is an application of all C programming knowledge that students have acquired since starting at ALX School on January 23, 2023.


## Compilation and use

```
$ git clone [insert repository link here]
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```
Compile everything within the directory and use _printf in your main function.

## Project Breakdown
| Task # | Type | Short description |
| ---: | --- | --- |
|0 | **Mandatory**     | Write a function that produces output according to a format. |
|1 | **Mandatory**     | Handle the following conversion specifiers: `d` `i` |
|2 | *Advanced* | Handle the following custom conversion specifiers: <br>`b` the unsigned int argument is converted to binary |
|3 | *Advanced* | Handle the following conversion specifiers: <br> `u`, `o`, `x`, `X`|
|4 | *Advanced* | Use a local buffer of 1024 chars in order to call write as little as possible.|
|5 | *Advanced* | Handle the following custom conversion specifier: <br>`S` |


## Synopsis
This is a custom implementation of `printf` from the standard library `<stdio.h>`. This project is an application of all C programming knowledge that students have acquired since starting at ALX School on January 23, 2023.


## Compilation and use

```
$ git clone [insert repository link here]
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```
iompile everything within the directory and use _printf in your main function.

## Project Breakdown
| Task # | Type | Short description |
| ---: | --- | --- |
|0 | **Mandatory**     | Write a function that produces output according to a format. |
|1 | **Mandatory**     | Handle the following conversion specifiers: `d` `i` |
|2 | *Advanced* | Handle the following custom conversion specifiers: <br>`b` the unsigned int argument is converted to binary |
|3 | *Advanced* | Handle the following conversion specifiers: <br> `u`, `o`, `x`, `X`|
|4 | *Advanced* | Use a local buffer of 1024 chars in order to call write as little as possible.|
|5 | *Advanced* | Handle the following custom conversion specifier: <br>`S` |
|6 | *Advanced* | Handle the following conversion specifier: <br>`p`|
|7 | *Advanced* |Handle the following flag characters for non-custom conversion specifiers:<br>`+`, ` ` (space), `#` |
|8 | *Advanced* |Handle the following length modifiers for non-custom conversion specifiers:<br>`l`, `h`<br><br>Conversion specifiers to handle: `d`, `i`, `u`, `o`, `x`, `X` |
|9 | *Advanced* |Handle the field width for non-custom conversion specifiers. |
|10 | *Advanced* | Handle the precision for non-custom conversion specifiers. |
|11 | *Advanced* | Handle the `0` flag character for non-custom conversion specifiers.|
|12 | *Advanced* | Handle the `-` flag character for non-custom conversion specifiers.|
|13 | *Advanced* |Handle the following custom conversion specifier:<br>`r` : prints the reversed string |
|14 | *Advanced* |Handle the following custom conversion specifier:<br>`R`: prints the rot13'ed string |
|15 | *Advanced* |All the above options works well together


## To Do
### Handle the following conversion specifiers:
- [x] c - `char`
- [x] s - `string`
- [ ] % - `percent`
- [x] d - `decimal`
- [x] i - `integer`
- [x] b - `binary`

### Base Printf
- [ ] Write output to stdout, the standard output stream
- [x] Returns: the number of characters printed (excluding the null byte used to end output to strings)
