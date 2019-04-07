#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char buffer [3] = " \n";


    for (int i = 48; i < 58; i++) {
        buffer[0] = i;
        size_t n = write(1, buffer, 2);
        if (n < 0) perror("main");

        
    }

    void * ptr = malloc(131049);

    return 0;
} // main

