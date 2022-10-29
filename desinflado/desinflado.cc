/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Pablo Aswani García alu0101546001@ull.edu.es
  * @date Oct 25 2022
  * @brief Converts char into its lowercase counterpart
  * @see https://github.com/IB-2022-2023/P05-expressions/blob/main/expressions.md
  */
#include <iostream>
#include <cctype>

int main() {
  std::cout << "Introduce character to convert to lowercase" << std::endl;
  char character;
  std::cin >> character;
  char lower_character = tolower(character);
  std::cout << lower_character << std::endl;
  return 0;
}
