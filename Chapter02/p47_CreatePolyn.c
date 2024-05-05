// #include <stdio.h>
#include <cstddef>
#include <stdlib.h>

/* 用链表表示多项式时，每个链表结点存储多项式中的一个非零项，包括
系数、指数两个数据域以及一个指针域 */
typedef struct PNode {
  float coef;         // 系数
  float expn;         // 指数
  struct PNode *next; // 指针域
} PNode, *Polynomial;

PNode t1;
t1 = PNode { 3.5, 2, NULL }
int main(void) { printf("%s\n", PNode); }

// void CreatePolyn(Polynomial &P, int n) {
/*
void CreatePolyn(Polynomial &P, int n) {
  // 输入 n 项的系数和指数，建立表示多项式的有序链表 P
  // P = new PNode;
  P = (Polynomial *)malloc(sizeof(PNode));
  P->next = NULL; // 先建立一个带头节点的单链表
}
*/
