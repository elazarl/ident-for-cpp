## Purpose

Proof of concept for "ident"-like mechanism in C++.
We will add a string for each file, that would "mark" it,
and if this file is used during compilation of the executable
the executable will contain this string.

This should work both for C++ source file, and header files.

The idea is, being able to identify which source files were
compiled, and catch errors, such as, including the wrong header file.

## How it works

We will add a `const static` varaible to each file whose constructor
would be fed with a string. The constructor will tuck this string
to a vector, and would expose a static function that uses it.

The main function, will use the aforementioned static function.

## How to use

Clone the repository, and run `make`, in a system with bash, g++
4.6, and GNU Make
