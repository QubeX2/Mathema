#include <iostream>
#include <vector>
#include "../include/mathemax.hpp"

int main(int, char**) {
    std::cout << Mathemax::Arithmetic::Add<int>(1, 2, 3, 4, 5, 6, 7, 8, 9) << std::endl;
    std::cout << Mathemax::Arithmetic::Add<int>({1, 2, 3, 4, 5, 6, 7, 8, 9}) << std::endl;

    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << Mathemax::Arithmetic::Add(v.begin(), v.end()) << std::endl;

    /*
    int n[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << Mathemax::Arithmetic::Add(n);
    */

}
