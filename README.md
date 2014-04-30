kmpp
====

KMPP is a tinyC-based compiler that lets you compile your m++ files.


Usage
====

    kmpp <filename.m++> -o <name>


Features
====
 -- SMALL! You can compile and execute C code everywhere, for example on
 -  rescue disks.
 -
 -- FAST! tcc generates optimized x86 code. No byte code
 -  overhead. Compile, assemble and link about 7 times faster than 'gcc
 -  -O0'.
 -
 -- UNLIMITED! Any C dynamic library can be used directly. TCC is
 -  heading torward full ISOC99 compliance. TCC can of course compile
 -  itself.
 -
 -- SAFE! tcc includes an optional memory and bound checker. Bound
 -  checked code can be mixed freely with standard code.
 -
 -- Compile and execute C source directly. No linking or assembly

