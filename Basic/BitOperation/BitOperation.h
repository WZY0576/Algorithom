//
// Created by wzhy on 2021/4/6.
//

#ifndef ALGORITHOM_BITOPERATION_H
#define ALGORITHOM_BITOPERATION_H
/**
 * BitOperation实现了一些基本的位操作
 * @convention 约定整数n在二进制表示下最后一位为第0位，往前依次为第1，2，3...位
 */

/**
 * 复制以下内容以快速使用
#define bitAt(n,k) ((n>>k)&1)   // 取出整数n在二进制表示下的第k位
#define lastOf(n,k) (n&((1<<k)-1))  // 取出整数n在二进制表示下的后k位
#define toggleAt(n,k) n=n^(1<<k)    // 把整数n在二进制表示下的第k位取反
#define setAt(n,k) n=n|(1<<k)   // 把整数n在二进制表示下的第k位置1
#define resetAt(n,k) n=n&(~(1<<k))  // 把整数n在二进制表示下的第k位清零
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

/**
 * 把整数n在二进制表示下的第k位取反
 * @return 取反后的整数值
 */
int toggleAt(int n, int k);

/**
 * 把整数n在二进制表示下的第k位置1
 * @return 置1后的整数值
 */
int setAt(int n, int k);

/**
 * 把整数n在二进制表示下的第k位清零
 * @return 清零后的整数值
 */
int resetAt(int n, int k);

#endif //ALGORITHOM_BITOPERATION_H
