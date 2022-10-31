/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Pablo Aswani García alu0101546001@ull.edu.es
  * @date Oct 25 2022
  * @brief the program calculates all the operations possible between two
  * integers and then compares them
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */


#include <iostream>

int main() {
  std::cout << "Introduce the value of the operands: ";
  int operand_1, operand_2;
  std::cin >> operand_1 >> operand_2;
  std::cout << operand_1 << " % " << operand_2 << " = " << operand_1 % operand_2
            << std::endl;
  std::cout << operand_1 << " / " << operand_2 << " = " << operand_1 / operand_2 
            << std::endl;
  std::cout << operand_1 << " + " << operand_2 << " = " << operand_1 + operand_2
            << std::endl;
  std::cout << operand_1 << " - " << operand_2 << " = " << operand_1 - operand_2
            << std::endl;
  std::cout << operand_1 << " * " << operand_2 << " = " << operand_1 * operand_2
            << std::endl;
  std::cout << operand_1 << " == " << operand_2 << " = " 
            << (operand_1 == operand_2) << std::endl;
  std::cout << operand_1 << " >= " << operand_2 << " = " 
            << (operand_1 >= operand_2) << std::endl;
  std::cout << operand_1 << " > " << operand_2 << " = " 
            << (operand_1 > operand_2) << std::endl;
  std::cout << operand_1 << " <= " << operand_2 << " = " 
            << (operand_1 <= operand_2) << std::endl;
  std::cout << operand_1 << " < " << operand_2 << " = " 
            << (operand_1 < operand_2) << std::endl;
  return 0;
}
