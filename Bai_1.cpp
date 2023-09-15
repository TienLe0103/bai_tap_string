#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    std::string str;
    char ch;
    std::getline(std::cin, str);
    std::cin >> ch;
    int count = 0;
    for (char c : str) {
        if (c == ch) 
            count++;
    }
    std::cout << count;
}
