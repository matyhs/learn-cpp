#include "function.h"

int add(int x, int y) {
    return x + y;
}

int add(int x, int y, int z) {
    return add(add(x, y), z);
}