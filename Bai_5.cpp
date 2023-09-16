#include <iostream>
#include <string>
#include <cctype>

bool MK_AN_TOAN(const std::string& s) {
    bool IN_HOA = false;
    bool IN_THUONG = false;
    bool CHU_SO = false;
    for (char c : s) {
        if (std::isupper(c)) //ktra ky tu in hoa
            IN_HOA = true;
        else if (std::islower(c)) //ktra ky tu in thuong
            IN_THUONG = true;
        else if (std::isdigit(c)) //ktra ky tu so
            CHU_SO = true;
    }
    return IN_HOA && IN_THUONG && CHU_SO && s.length() >= 6;
}

int main() {
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
