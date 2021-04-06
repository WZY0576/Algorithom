//
// Created by wzhy on 2021/4/6.
//

#ifndef ALGORITHOM_BITOPERATION_H
#define ALGORITHOM_BITOPERATION_H
/**
 * BitOperation实现了一些基本的位操作
 * @convention 约定整数n最后一位为第0位，往前依次为第1，2，3...位
 */

/**
 * 取出整数n在二进制表示下的第k位
 * @return 0 或 1
 */
int bitAt(int n, int k);

/**
 * 取出整数n在二进制表示下的后k位
 * @return 后k位二进制数对应的整数
 */
int lastOf(int n, int k);


#endif //ALGORITHOM_BITOPERATION_H
