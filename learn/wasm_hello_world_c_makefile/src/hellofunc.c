#include <stdio.h>
#include "hellomake.h"
#include <emscripten/emscripten.h>

#ifdef __cplusplus
#define EXTERN extern "C"
#else
#define EXTERN
#endif

EXTERN EMSCRIPTEN_KEEPALIVE 
void myPrintHelloMake(void) {

  printf("Hello makefiles!\n");

  return;
}
