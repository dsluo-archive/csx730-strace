# csx730-strace Submission

## Group Member Names

* David Luo 811357331
* Devan Vitha 811055508
* Hayden Behre 811154841

## System Call Trace

```
execve("./main", ["./main"], [/* 29 vars */]) = 0
brk(0)                                  = 0x2107000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f685d5d9000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
open("/usr/local/gcc/8.2.0/lib64/tls/x86_64/libc.so.6", O_RDONLY) = -1 ENOENT (No such file or directory)
stat("/usr/local/gcc/8.2.0/lib64/tls/x86_64", 0x7ffe26896400) = -1 ENOENT (No such file or directory)
open("/usr/local/gcc/8.2.0/lib64/tls/libc.so.6", O_RDONLY) = -1 ENOENT (No such file or directory)
stat("/usr/local/gcc/8.2.0/lib64/tls", 0x7ffe26896400) = -1 ENOENT (No such file or directory)
open("/usr/local/gcc/8.2.0/lib64/x86_64/libc.so.6", O_RDONLY) = -1 ENOENT (No such file or directory)
stat("/usr/local/gcc/8.2.0/lib64/x86_64", 0x7ffe26896400) = -1 ENOENT (No such file or directory)
open("/usr/local/gcc/8.2.0/lib64/libc.so.6", O_RDONLY) = -1 ENOENT (No such file or directory)
stat("/usr/local/gcc/8.2.0/lib64", {st_mode=S_IFDIR|0755, st_size=4096, ...}) = 0
open("tls/x86_64/libc.so.6", O_RDONLY)  = -1 ENOENT (No such file or directory)
open("tls/libc.so.6", O_RDONLY)         = -1 ENOENT (No such file or directory)
open("x86_64/libc.so.6", O_RDONLY)      = -1 ENOENT (No such file or directory)
open("libc.so.6", O_RDONLY)             = -1 ENOENT (No such file or directory)
open("/etc/ld.so.cache", O_RDONLY)      = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=98404, ...}) = 0
mmap(NULL, 98404, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f685d5c0000
close(3)                                = 0
open("/lib64/libc.so.6", O_RDONLY)      = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0000\356A\0203\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0755, st_size=1930416, ...}) = 0
mmap(0x3310400000, 3750184, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x3310400000
mprotect(0x331058a000, 2097152, PROT_NONE) = 0
mmap(0x331078a000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x18a000) = 0x331078a000
mmap(0x3310790000, 14632, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x3310790000
close(3)                                = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f685d5bf000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f685d5be000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f685d5bd000
arch_prctl(ARCH_SET_FS, 0x7f685d5be700) = 0
mprotect(0x331078a000, 16384, PROT_READ) = 0
mprotect(0x3310220000, 4096, PROT_READ) = 0
munmap(0x7f685d5c0000, 98404)           = 0
write(1, "0\n", 2)                      = 2
write(1, "1\n", 2)                      = 2
write(1, "2\n", 2)                      = 2
write(1, "3\n", 2)                      = 2
write(1, "4\n", 2)                      = 2
write(1, "5\n", 2)                      = 2
write(1, "6\n", 2)                      = 2
write(1, "7\n", 2)                      = 2
write(1, "8\n", 2)                      = 2
write(1, "9\n", 2)                      = 2
exit_group(0)                           = ?
+++ exited with 0 +++
```

## System Call Trace Explanation

```
write(1, "3\n", 2)                      = 2
```

This call is writing two bytes, `3` and a newline, to file descriptor 1, aka stdout.


## When `malloc` Switches

It switches from `brk` to `malloc` at 131049 bytes allocated.
