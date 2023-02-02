#include<iostream>

int n_to_zero(int n) {
        if (n == 0) {
                std::cout << n << std::endl;
                return 0;
        }

        std::cout << n << " ";
        n_to_zero(n - 1);
        return 0;
}


int zero_to_n(int n) {
        if (n == 0) {
                std::cout << n << " ";
                return 0;
        }

        zero_to_n(n - 1);
        std::cout << n << " ";
        return 0;
}

int main() {
        int n = 5;
        n_to_zero(n);
        zero_to_n(n);
}
