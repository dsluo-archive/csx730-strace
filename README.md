# csx730-strace Program Break Activity

### References

* [ASCII Chart](https://en.cppreference.com/w/c/language/ascii)
* [`write(2)` - write to a file descriptor](http://man7.org/linux/man-pages/man2/write.2.html)
* [`malloc(3)` - allocate dynamic memory](http://man7.org/linux/man-pages/man3/malloc.3.html)
* [`mmap(2)` - map files or devices into memory](http://man7.org/linux/man-pages/man2/mmap.2.html)
* [`brk(2)`, `sbrk(2)` - change data segment size](http://man7.org/linux/man-pages/man2/brk.2.html)
* [`strace(1)` - trace system calls and signals](http://man7.org/linux/man-pages/man1/strace.1.html)

### Getting Started

1. Form into **small groups of two or three** people. These instructions assume that at least one group 
   member is logged into the Nike. 

1. Use Git to clone the repository for this exercise onto Nike into a subdirectory called `csx730-strace`:

   ```
   $ git clone https://github.com/cs1730/csx730-strace.git
   ```

1. Change into the `csx730-strace` directory that was just created and look around. There should be a
   couple different files already present.
   
### Activity Questions

This activity is open book, open notes, and asking your instructor questions is allowed. You may
find the assembly notes provided in recent lecture modules on eLC useful. 

1. Modify `SUBMISSION.md` to include the name, UGA ID number, course number (4730 or 6730) 
   for each group member. Then, **sign the piece of paper that your instructor has at the front 
   of the room.**
   
1. In `main.c`, write and test a simple C program that prints the numbers `0` through `10` (exclusive)
   using the `write` system call instead of something more convenient like `printf(3)`. Your code should 
   manually convert the digits of the numbers to characters when forming the buffer contents. 
   No dynamic memory allocation is needed for this. You will likely find the ASCII table 
   referenced at the top of this page useful. You may use loops.

1. Make sure your program compiles and runs.

**CHECKPOINT:** Ask your instructor if you have any questions.

1. Run your program with `strace(1)` to see the system call trace. Copy this output
   to the designated section in `SUBMISSION.md`.
   
1. Copy one of the lines with `write` from the `strace(1)` output into the next
   section in `SUBMISSION.md`. 
   
1. Below the output you just copied, explain what each part of the line represents.
   You should replace the text, "Write details here..."
   
**CHECKPOINT:** Ask your instructor if you have any questions.

1. In the last section of `SUBMISSION.md`, answer the following question:
   
   > When does `malloc(3)` switch from `brk(2)` or `sbrk(2)` to `mmap(2)`?
   
   Near the end of `main` in `main.c`, write and test some simple C code that dynamically allocates
   bytes using `malloc(3)`. Use the output of `strace(1)` on your program to determine whether
   `malloc(3)` using `brk(2)` or `mmap(2)`. Adjust the program and retest until you see the
   switch. In `SUBMISSION.md`, you should replace the text "Write details here..." with you answer
   to this question.
   
**CHECKPOINT:**

1. **Before 3:15 PM (or 11:55 for partial)**, double check that your group member names are listed in 
   `SUBMISSION.md` as well as the piece of paper that your instructor has at the front of the room, then
   submit your activity attempt using the `submit` command. From the parent directory:
   
   ```
   $ submit csx730-strace csx730
   ```

<hr/>

[![License: CC BY-NC-ND 4.0](https://img.shields.io/badge/License-CC%20BY--NC--ND%204.0-lightgrey.svg)](http://creativecommonns.org/licenses/by-nc-nd/4.0/)

<small>
Copyright &copy; Michael E. Cotterell and the University of Georgia.
This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-nd/4.0/">Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License</a> to students and the public.
The content and opinions expressed on this Web page do not necessarily reflect the views of nor are they endorsed by the University of Georgia or the University System of Georgia.
</small>
