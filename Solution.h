//
// Created by Metallic  on 17/4/5.
//

#ifndef ALGORITHM_INTERVIEW_SOLUTION_H
#define ALGORITHM_INTERVIEW_SOLUTION_H

#include <list>
#include <vector>

typedef struct ListNode *Node;

struct ListNode {
    int data;
    Node next;
};


class Solution {
public:
    //1.给定链表头结点，在没有任何变量辅助下返回链表长度
    int LengthOfListWithoutVar(Node head);

    //2.找到无序数组中第2大的元素
    int SecondMaxNumber(std::vector &vector);

    //3.最长公共子串
    char *LongestCommonSequence(char *a, char *b);
};


#endif //ALGORITHM_INTERVIEW_SOLUTION_H
