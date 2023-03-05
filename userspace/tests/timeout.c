/*
---
category: panic
description: "Dummy test, to demo a test timeout"
timeout: 10
*/

#include "stdlib.h"
#include "sched.h"

int main()
{
  while (1)
    sched_yield();
}
