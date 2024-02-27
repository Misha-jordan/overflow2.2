#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Header.h"


int main() {
    Matrix mat1(3, 3);
    Matrix mat2(3, 3);

    mat1.fillRandom();
    mat2.fillRandom();

    std::cout << "Matrix 1:\n" << mat1 << "\n";
    std::cout << "Matrix 2:\n" << mat2 << "\n";

    Matrix sum = mat1 + mat2;
    std::cout << "Sum of matrices:\n" << sum << "\n";

    Matrix diff = mat1 - mat2;
    std::cout << "Difference of matrices:\n" << diff << "\n";

    Matrix mult = mat1 * mat2;
    std::cout << "Product of matrices:\n" << mult << "\n";

    std::cout << "Matrix 1 == Matrix 2: " << (mat1 == mat2) << "\n";
    std::cout << "Matrix 1 != Matrix 2: " << (mat1 != mat2) << "\n";

    return 0;
}
