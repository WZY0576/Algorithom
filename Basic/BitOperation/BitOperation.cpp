//
// Created by wzhy on 2021/4/6.
//

#include "BitOperation.h"
int bitAt(int n, int k) {
    return (n >> k) & 1;
}

int lastOf(int n, int k) {
    return n & ((1 << k) - 1);
}

int toggleAt(int n, int k) {
    return n ^ (1 << k);
}

int setAt(int n, int k) {
    return n | (1 << k);
}

int resetAt(int n, int k) {
    return n & (~(1 << k));
}
