#include <iostream>

void printNumbers(int M, int N) {
    if (M <= N) {
        std::cout << M << " ";
        printNumbers(M + 1, N);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int M, N;
    std::cout << "Введите число M: ";
    std::cin >> M;
    std::cout << "Введите число N: ";
    std::cin >> N;


    std::cout << "натуральные число от " << M << " до " << N << " : ";
    printNumbers(M, N);

    return 0;
}
