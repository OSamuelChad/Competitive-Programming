// https://cses.fi/problemset/task/1068

#include <iostream>
 
int main() {
    long long n;
    if (!(std::cin >> n)) return 0;
 
    std::cout << n; 
 
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = (n * 3) + 1; 
        }
        std::cout << " " << n; 
    }
    
    std::cout << std::endl;
    return 0;
}