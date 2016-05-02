#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

int main() {
  std::string my_path = "foo/bar/oh/yeah";
  std::cout << my_path << std::endl;
  std::replace(my_path.begin(), my_path.end(), '/', '\\');
  std::cout << my_path << std::endl;
  my_path = std::regex_replace(my_path, std::regex("\\"), "/");
  std::cout << my_path << std::endl;
  return 0;
}
