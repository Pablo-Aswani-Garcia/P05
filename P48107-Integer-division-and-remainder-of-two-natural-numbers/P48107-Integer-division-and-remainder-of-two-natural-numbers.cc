/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Pablo Aswani García alu0101546001@ull.edu.es
  * @date Oct 25 2022
  * @brief Shows division and remainder between two integer numbers
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressons.md
  */

#include <iostream>

int main() {
  int divider, dividend;
  std::cin >> divider >> dividend;
  std::cout << divider / dividend << " " << divider % dividend << std::endl;
  return 0;
}

