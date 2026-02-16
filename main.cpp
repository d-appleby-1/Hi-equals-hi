#include <iostream>
#include <string>
#include "src/hello.hpp"

using std::string;

int main() {
  string s1 = "Hi";
  string s2 = "hi";
  int x = strcmp_case_insensitive(s1, s2);
  std::cout << "The comparison of the string '" << s1 << "' and '" << s2 << "' returns " << x << std::endl;
  s1 = "string one";
  s2 = "String two";
  x = strcmp_case_insensitive(s1, s2);
  std::cout << "The comparison of the string '" << s1 << "' and '" << s2 << "' returns " << x << std::endl;
  s1 = "string one";
  s2 = "String one";
  x = strcmp_case_insensitive(s1, s2);
  std::cout << "The comparison of the string '" << s1 << "' and '" << s2 << "' returns " << x << std::endl;
  s1 = "String two";
  s2 = "string one";
  x = strcmp_case_insensitive(s1, s2);
  std::cout << "The comparison of the string '" << s1 << "' and '" << s2 << "' returns " << x << std::endl;
}
