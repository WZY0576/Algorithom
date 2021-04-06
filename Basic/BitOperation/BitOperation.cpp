//
// Created by wzhy on 2021/4/6.
//

#include "BitOperation.h"
int bitAt(int n, int k) {
    return (n >> k) & 1;
}