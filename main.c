#include <unistd.h>
#include <stdio.h>

int main() {
  char buffer [4] = "  \n";
  buffer[0] = 0x34;
  buffer[1] = 0x32;
  ssize_t n = write(1, buffer, 3);
  if (n < 0) perror("main");
  return 0;
} // main

