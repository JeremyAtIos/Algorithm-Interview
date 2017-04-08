#include <iostream>
using namespace std;

#include "Solution.h"

int main() {
    Solution s;

    char *w[] = {"123", "xiao", "a", "b", "xiao", "xao"};
    char **words = w;
    cout<<s.shortDistanceAmongTwoWords(words, 6, "xiao", "xao")<<endl;


    return 0;
}