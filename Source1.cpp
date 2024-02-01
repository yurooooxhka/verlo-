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
    std::cout << "������� ����� M: ";
    std::cin >> M;
    std::cout << "������� ����� N: ";
    std::cin >> N;


    std::cout << "����������� ����� �� " << M << " �� " << N << " : ";
    printNumbers(M, N);

    return 0;
}