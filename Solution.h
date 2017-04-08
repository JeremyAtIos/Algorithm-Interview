//
// Created by Metallic  on 17/4/5.
//

#ifndef ALGORITHM_INTERVIEW_SOLUTION_H
#define ALGORITHM_INTERVIEW_SOLUTION_H

#include <vector>

using namespace std;

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
    int SecondMaxNumber(vector<int> &v);

    //3.最长公共子串
    char *LongestCommonSequence(char *a, char *b);

    //4.找到无序数组中第k大的元素
    int KMaxNumber(vector<int> &v, int k);

    //5.求两个字符串在链表中的最短距离
    int shortDistanceAmongTwoWords(char **words, int wordsSize, char *word1, char *word2);

    //6.有四个装药丸的罐子,每个药丸都有一定的重量,被污染的药丸是没被污染的重量＋1.只称量一次,判断哪个罐子的药被污染了
    //给四个罐子编上号,1、2、3、4.然后1号拿一个,2号拿2个,3号拿3个,4号拿4个,称一下\x0d,
    //若是都没被污染,应该重10个重量,若是11个重量就是1号罐,12就是2号罐,13就是3号罐,14就是4号罐
};


#endif //ALGORITHM_INTERVIEW_SOLUTION_H
