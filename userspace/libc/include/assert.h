#pragma once

#include <stdio.h>
#include <stdlib.h>

#define assert(X) do { if (!(X)) {\
    printf("Assertion failed: '%s', file %s, function %s, line %d\n", #X, __FILE__, __FUNCTION__, __LINE__); \
 exit(-1); } } while (0)

/*
* Wrapper around printf. Everything, that gets printed with this gets
* prefixed with 'TORTILLAS EXPECT: '.
**/
#define tortillas_expect(FMT, ...) printf("TORTILLAS EXPECT: " FMT, __VA_ARGS__);
