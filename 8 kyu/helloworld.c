#include <stdio.h>
#include <stdbool.h>

const char* greet(){
  return "hello world!";
}

void main(){
    printf("%s",greet());
}