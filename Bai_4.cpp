#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr);
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
    int n;
    std::string str;
    std::cin >> n;
    std::cin.ignore();
    std::getline(std::cin, str);
    int x = 0, y = 0;
    int direction = 0; 
    for (char comments : str) {
        switch(comments) {
            case('G'):
                if (direction == 0) y++;
                else if (direction == 1) x++;
                else if (direction == 2) y--;
                else if (direction == 3) x--;
                break;
            case('B'):
                if (direction == 0) {
                    y--;
                    direction = 2;
                } else if (direction == 1) {
                    x--;
                    direction = 3;
                } else if (direction == 2) {
                    y++;
                    direction = 0;
                } else if (direction == 3) {
                    x++;
                    direction = 1;
                }
                break;
            case('L'):
                if (direction == 0) {
                    x--;
                    direction = 3;
                } else if (direction == 1) {
                    y++;
                    direction = 0;
                } else if (direction == 2) {
                    x++;
                    direction = 1;
                } else if (direction == 3) {
                    y--;
                    direction = 2;
                }
                break;
            case('R'):
                if (direction == 0) {
                    x++;
                    direction = 1;
                } else if (direction == 1) {
                    y--;
                    direction = 2;
                } else if (direction == 2) {
                    x--;
                    direction = 3;
                } else if (direction == 3) {
                    y++;
                    direction = 0;
                }
                break;
        }
    }
    std::cout << x << ' ' << y;
    return 0;
}
