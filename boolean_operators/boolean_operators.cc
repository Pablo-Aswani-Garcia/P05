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
  bool bool_a{false}, bool_b{false};

  for(int i{0}; i < 2; i++) {
    for(int j{0}; j < 2; j++) {
      std::cout << "bool a es: " << bool_a << " bool_b es: " << bool_b <<
                   std::endl;
      std::cout << "Puerta AND: " << (bool_a && bool_b) << std::endl;
      std::cout << "Puerta OR: " << (bool_a || bool_b) << std::endl;
      std::cout << "Puerta NOT (A): " << (!bool_a) << std::endl;
      std::cout << "Puerta NOT (B): " << (!bool_b) << std::endl;
       std::cout << "Puerta NOR: " << !(bool_a || bool_b) << std::endl;
      std::cout << "Puerta NAND: " << !(bool_a && bool_b) << std::endl;
      std::cout << "Puerta XOR: " << ((bool_a || bool_b) && !(bool_a && bool_b)) << std::endl;
      bool_b=true;
    }

    bool_b=false;
    bool_a=true;
  }
  return 0;
}
