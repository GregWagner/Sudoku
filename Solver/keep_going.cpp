#include <stdio.h>
#include <stdlib.h>
#include "count_solved.h"
#include "def.h"

int keep_going(void) {
  return (count_solved() < 81  &&  !problem_found);
}
