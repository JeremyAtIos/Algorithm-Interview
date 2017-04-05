//
// Created by Metallic  on 17/4/5.
//

#include "Solution.h"

int Solution::LengthOfListWithoutVar(Node head) {
    if (head)
        return 1 + LengthOfListWithoutVar(head->next);
    else
        return 0;
}