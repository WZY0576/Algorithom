//
// Created by wzhy on 2021/4/10.
//
#include <iostream>
using namespace std;
const int HEAP_SIZE = (1 << 16) - 1;
/**
 * 二叉堆(大根堆)的数组实现。根节点对应heap[1],根节点的左子节点对应heap[2],根节点的右子节点对应heap[3],依次类推
 * 事实：对于任意一个结点，若它的标号为x,则它的左子节点的标号应该为 2x
 */
pair<int, int> heap[HEAP_SIZE];
int len = 0;    // heap中实际的元素个数
int parentOf(int x) {
    return x / 2;
}

int leftOf(int x) {
    return 2 * x;
}

int rightOf(int x) {
    return 2 * x + 1;
}

void up(int x) {
    pair<int, int> temp;
    while (x > 1) {
        if (heap[x].first > heap[parentOf(x)].first) {
            temp = heap[x];
            heap[x] = heap[parentOf(x)];
            heap[parentOf(x)] = temp;
            x = parentOf(x);
        } else {
            break;
        }
    }
}

void push(pair<int, int> p) {
    heap[++len] = p;
    up(len);
}

pair<int, int> top() {
    return heap[1];
}

void down(int x) {
    pair<int, int> temp;
    int target = leftOf(x); // 假设把x节点下降到它的左子节点
    while (target <= len) {
        if (target + 1 <= len && heap[target].first < heap[target + 1].first)   target++;
        if (heap[target].first > heap[x].first) {
            temp = heap[x];
            heap[x] = heap[target];
            heap[target] = temp;
            x = target;
            target = leftOf(x);
        } else {
            break;
        }
    }
}

void pop() {
    if (len == 0)   return;
    heap[1] = heap[len--];
    down(1);
}

