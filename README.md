# try_catch.h
Simple jmp_buf-based try-catch in C

# Install
This is an STB-style single-header library, so simply include the header file, and in a single source file do
```
#define TRY_CATCH_IMPLEMENTATION
```
before including to include the implementation as well (mostly internal state).
