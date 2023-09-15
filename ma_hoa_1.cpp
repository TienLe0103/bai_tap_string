#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int k;
    std::string str;
    std::cin >> k;
    std::cin.ignore();
    std::getline(std::cin, str);
    std::string str1 = str.substr(0, k);
    std::string str2 = str.substr(k);
    std::reverse(str1.begin(), str1.end());
    std::reverse(str2.begin(), str2.end());
    std::cout << str1 + str2;
}
