Create a compiler for the C language
====================================

This program reads C source code from a file, and write
MIPS assembly to another file.

Program build and execution
---------------------------

This program is built using the command:

    make bin/c_compiler

The compilation function is invoked using the flag `-S`, with
the source file and output file specified on the command line:

    bin/c_compiler -S [source-file.c] -o [dest-file.s]
    
Input Format
------------

The input format is the same as for the translator (pre-processed C90).

Output Format
-------------

The output format should be MIPS1 assembly code.

It is possible to assemble and link this code
against a C run-time, and execute correctly
on a MIPS processor as emulated by `qemu-mips`.
