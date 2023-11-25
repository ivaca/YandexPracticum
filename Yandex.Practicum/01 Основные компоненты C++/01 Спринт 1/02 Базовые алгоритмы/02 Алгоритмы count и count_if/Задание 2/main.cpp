#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

bool CheckString(string s) {
    if (!s.empty()) {
        return s[0] == 'A' || s[0] == 'a';
    }
    return false;
}

int CountStartsWithA(const vector<string>& strings) {
    return count_if(strings.begin(), strings.end(), CheckString);
}

int main() {
    cout << CountStartsWithA({"And"s, "another"s, "one"s, "gone"s, "another"s, "one"s "bites"s, "the"s, "dust"s});
    return 0;
}
