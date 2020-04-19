#include <stdio.h>
#include <stdlib.h>
#include "def.h"
#include "pairs_find.h"
#include "y_wing.h"

int y_wing() {
#ifdef LOG_IN_OUT
  printf("--- y_wing >>>\n");
#endif
  int result = pairs_find(DEF_Y_WING);
#ifdef LOG_IN_OUT
  printf("<<< y_wing ---\n");
#endif
  return result;
}
