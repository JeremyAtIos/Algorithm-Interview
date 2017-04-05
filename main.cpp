#include <iostream>
using namespace std;

#include "Solution.h"

int main() {
    Solution s;

    ListNode head, node1, node2;
    head.data = 1;
    head.next = &node1;
    node1.data = 2;
//    node1.next = &node2;
//    node2.data = 3;
//    node2.next = NULL;

    cout<<s.LengthOfListWithoutVar(&head)<<endl;

    return 0;
}