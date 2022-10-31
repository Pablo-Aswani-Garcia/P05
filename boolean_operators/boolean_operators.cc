/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Pablo Aswani García alu0101546001@ull.edu.es
  * @date Oct 25 2022
  * @brief The program calculates all the logical operator from two boolean
  * variables
  * integers and then compares them
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */

#include <iostream>

int main() {
  for(int i{0}; i <= true; ++i) {
    for(int j{0}; j <= true; ++j) {
      std::cout << "bool a is: " << i << " bool b is: " << j <<
                   std::endl;
      std::cout << "AND: " << (i && j) << std::endl;
      std::cout << "OR: " << (i || j) << std::endl;
      std::cout << "NOT (A): " << (!i) << std::endl;
      std::cout << "NOT (B): " << (!j) << std::endl;
       std::cout << "NOR: " << !(i || j) << std::endl;
      std::cout << "NAND: " << !(i && j) << std::endl;
      std::cout << "XOR: " << ((i || j) && !(i && j)) << std::endl;
    }
  }
  return 0;
}
