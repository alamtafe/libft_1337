*This project has been created as part of the 42 curriculum by alamtafe*

# Description

## Libft

*libft is porject we create in it our c library that have function copy  the behavior of exict function in c library and create some Additional function that are not exict for devolop our skills in string, pointers , memory, linked lists in C programing.*
### Library Description:
1- libft.a is a static library containing compiled object files of custom C functions.

*if you want to see what insind archive*
> ar t libft.a

2- Part 1: create functions reproduce the behavior of selected standard C library functions.

3- Part 2: develop a set of functions that are either not included in C libaray.

4-  Part 3: implement functions using a structure to manipulate linked list

# Instructions

## Requirements

- A compiler such as cc.
- make.
- ar to create the archive.

## Installation

*clone the repository*

> git clone git@vogsphere-v2-bg.1337.ma:vogsphere/intra-uuid-0551ec11-6dff-4754-a135-29a74e2cd5b7-7737819-alamtafe libft 

*entre the folder*

> cd libft

## Compilation

*create the libray*
> make

*to delete object files*
> make clean

*to delte the archive and obeject files two*
> make fclean

*to delete the archive and obeject files and compile the libray*
> make re

*Compile your program with the library*
>cc -Wall -Wextra -Werror main.c libft.a -o test

## execution

*run the executable*
> ./test

# Resources:

- Linux man-pages — documentation for standard C and POSIX functions.
