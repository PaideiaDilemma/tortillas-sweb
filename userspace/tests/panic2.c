/*
---
category: panic
description: "Dummy test, to demo a locking error triggered by exit(2)"
*/

#include "stdlib.h"

int main()
{
  exit(2);
}
