/*
---
category: panic
description: "Dummy test, to demo a kernel panic triggered by exit(1)"
*/

#include "stdlib.h"

int main()
{
  exit(1);
}
