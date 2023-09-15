#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    int k;
    std::string str;
    std::cin >> k;
    std::cin.ignore();
    std::getline(std::cin, str);
    for (int i = 0; i < str.length(); i++) {
        if ((int)str[i] - k >= 97)
            std::cout << char((int)str[i] - k);
        else 
            std::cout << char((int)str[i] - k + 26);
    }
}
