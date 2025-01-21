# EMBEDDED C BASIC - 2025

# Section 1: Intro

## 1.1 Introdution

### What's a program?
- Program is a series of instructions that cause a computer or a microcontroller to perform a particular(cụ thể) task.
- A computer program includes more than just instructions (hướng dẫn).
- It also contains data and various memory addresses on which the instructions work to perform a specific task.

For now day programming languages which we use in embedded systems design:
    - C/C++ (Must be good at C/C++ or both) - ``C` still leads in embedded domain.
    - Rust (Nice to have) - When C/C++ may be declining. Rust has potential to gain in embedded projects.
    - Python (Nice to have) - Automately 
    - Java
    - Assembly

- Python is famuous programming language. 
- And Rust programming language also has quickly gained popularity and also becoming very much famous in embedded.
- The usage (cách dùng hoặc cú pháp) of Python, Micro Python, and Java are also rarely used in embedded systems code development.
- Assembly level programming is very much powerful and it is still being used in various (nhiều) parts of the embedded project.

So, it's not like you know a C and C++ have completely taken over the assembly level programming.

### History of C programming language.

- Let's look at 'C' programming standardization and will also look at some history of 'C' programming language.
- The 'C' Programming language was initially developed in AT&T labs by Professor `Brian Kernighan` and `Dennis Ritchie`.
- So, during the year 1970, 'C' programming became very much popular but without any serious standardization to the language. - - The non-official standard was called K&R C, which led to many ambiguities (sự mơ hồ) among (giữa) different compiler programmers.
- And that actually led (đã dẫn đến) to non-portable (không có tính di động) codes.
- K&R C was a first non-official 'C' standard. 
- So, in 1989 American National Standards Institute(ANSI) designed and approved first official 'C' standard, which is also denoted by this tag name. `X3.159-1989`
- And in 1990 it was approved by `ISO` as international standard for 'C' programming language.
- So the ISO tag name is this one `ISO/IEC 9899:1990`. So, that means the first official international standard was released.
- So that's why, it is also called as `ANSI C` or `C89` or `C90` standard. 
- So, the language underwent (trải qua) few more changes (like addition of new features, addition of new syntaxes, data types etc.) 
- And newly updated standard was released in 1999 under the ISO tag : `ISO/IEC 9899:1999`
- this one, which is also called `C99` standard in short. 
- In December 2011 ISO released new standard under this tag name `ISO/IEC 9899:2011`
- Which is also called as `C11` standard. C11 supersedes (thay thế) the C99.
- I will be using the `C11` standard which is actually compiler default with some compiler extensions `gnu11`.
- So, collectively (tóm lại) we call it as a gnu11

- How to change the compiler settings to mention (đề cập đến) the 'C' standard?
- Note that if you have written a code using C90 standard, then it will compile without any issues in C99 standard compilation, so that what we call is backward compatibility (tương thích ngược).
- So but if you have written code using C99 standard specific features, then it may not compile successfully in C90 compilation.
- You should keep this in mind.
- But don't worry about this, just need set the standard in the compiler.
- 
