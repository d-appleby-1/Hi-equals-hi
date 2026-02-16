#include <string>
using std::string;

int strcmp_case_insensitive(string s1, string s2, int skip = 0) {
    string s1_new, s2_new;
    for (int i = 0; i < s1.length(); i++) {
        if (skip > 0) {
            if (s1[i] != ' ') {
                s1_new += tolower(s1[i]);
            }
        }
        else {
            s1_new += tolower(s1[i]);
        }
    }
    for (int i = 0; i < s2.length(); i++) {
        if (skip > 0) {
            if (s2[i] != ' ') {
                s2_new += tolower(s2[i]);
            }
        }
        else {
            s2_new += tolower(s2[i]);
        }
    }
    if (s1_new == s2_new) {
        return 0;
    }
    else if (s1_new < s2_new) {
        return -1;
    }
    else {
        return 1;
    }
}
