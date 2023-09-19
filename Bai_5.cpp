#include <iostream>
#include <string>

bool MK_AN_TOAN(const std::string& s) {
    bool IN_HOA = false;
    bool IN_THUONG = false;
    bool CHU_SO = false;
    for (char c : s) {
        if ((int)c >= 65 && (int)c <= 90) {
            IN_HOA = true;
        } else if ((int)c >= 97 && (int)c <= 122) { 
            IN_THUONG = true;
        } else if ((int)c >= 48 && (int)c <= 57) { 
            CHU_SO = true;
        }
        if (IN_HOA && IN_THUONG && CHU_SO) {
            break;
        }
    }
    return IN_HOA && IN_THUONG && CHU_SO && s.length() >= 6;
}

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    std::string password;
    std::cin >> password;
    int count = 0;
    for (int i = 0; i < password.length(); i++) {
        for (int j = i + 5; j < password.length(); j++) {
            if (MK_AN_TOAN(password.substr(i, j - i + 1))) {
                count++;
            }
        }
    }
    std::cout << count;
    return 0;
}
