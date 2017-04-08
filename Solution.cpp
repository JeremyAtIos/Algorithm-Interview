//
// Created by Metallic  on 17/4/5.
//

#include "Solution.h"
#include <cmath>
using namespace std;

int Solution::LengthOfListWithoutVar(Node head) {
    if (head)
        return 1 + LengthOfListWithoutVar(head->next);
    else
        return 0;
}

int Solution::SecondMaxNumber(vector<int> &v) {
    const int n = v.size();
    if (n <= 1) return INT32_MIN;

    //第一次遍历找出最大值
    int max = v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] > max)
            max = v[i];
    }

    //第二次找出第二大的值
    int result = v[0];
    bool hasFound = false;
    for (int j = 0; j < n; ++j) {
        if (v[j] >= result && v[j] != max) {
            result = v[j];
            hasFound = true;
        }
    }

    return hasFound ? result : INT32_MIN;
}

char *Solution::LongestCommonSequence(char *a, char *b) {
    if (a == NULL || b == NULL) return NULL;
    const int m = strlen(a);
    const int n = strlen(b);

    vector<vector<int> > v(m);
    int k = 0, p = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i] == b[j]) {
                if (i > 0 && j > 0)
                    v[i].push_back(v[i - 1][j - 1] + 1);
                else
                    v[i].push_back(1);

                if (v[i][j] > k) {
                    k = v[i][j];
                    p = i;
                }
            } else {
                v[i].push_back(0);
            }
        }
    }

    if (k == 0) return NULL;

    char *result = new char(k + 1);
    int g = 0;
    for (int l = p - k + 1; l <= p; ++l) {
        result[g++] = a[l];
    }

    return result;
}

int Solution::KMaxNumber(vector<int> &v, int k) {
    const int n = v.size();
    if (n < k || k == 0) return INT32_MIN;

    int temp, i = 0, j = n - 1;

    while (i < j) {
        temp = v[i];
        while (i < j) {
            while (i < j && v[j] >= temp) --j;
            if (i < j) v[i++] = v[j];

            while (i < j && v[i] <= temp) ++i;
            if (i < j) v[j--] = v[i];
        }
        v[i] = temp;

        //如果i+1 > k 那么第k个数就在i之后，否则，之前
        if (i + 1 < k) {
            ++i;
            j = n - 1;
        } else if (i + 1 > k) {
            j = i;
            i = 0;
        } else {
            break;
        }
    }
    return v[i];
}

int Solution::shortDistanceAmongTwoWords(char **words, int wordsSize, char *word1, char *word2) {
    if (words == NULL || word1 == NULL || word2 == NULL) return -1;

    int index1, index2, result = wordsSize;
    bool find1 = false, find2 = false;
    for (int i = 0; i < wordsSize; ++i) {
        if (!strcmp(words[i], word1)) {
            index1 = i;
            find1 = true;
        }
        if (!strcmp(words[i], word2)) {
            index2 = i;
            find2 = true;
        }

        if (find1 && find2) {
            if (fabs(index1 - index2) < result)
                result = fabs(index1 - index2);
        }
    }

    return find1 && find2 ? result : -1;
}