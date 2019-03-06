#include <unistd.h>
#include <stdio.h>

int main() {
  char buffer [3] = " \n";
  buffer[0] = 0x30;
  ssize_t n = write(1, buffer, 2);
  if (n < 0) perror("main");
  return 0;
} // main

