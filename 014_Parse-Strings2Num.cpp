///  Description: atoi vs stoi (parsing string to int or float)
///  Author:  Pritesh Gohil - priteshbgohil [at] gmail [dot] com

#include<iostream>

int main(int argc, char const *argv[]) {
  std::cout << "atoi presentations" << '\n';

  // ASCII to integer : atoi (come from C language)
  // bad choice because on failure it returns "0"
  std::cout << "atoi(\"1234\") = " <<  atoi("1234") << '\n';
  std::cout << "atoi(\"failes\") = " <<  atoi("failes") << '\n'; //0 when fails


  // string to integer : std::stoi (since  C++11)
  std::cout << "stoi(\"-1234\") = " <<  std::stoi("-1234") << '\n';
  std::cout << "stoi(\"12xy34\") = " <<  std::stoi("12xy34") << '\n';
  try{
    std::cout << "stoi(\"failes\") = " <<  std::stoi("failes") << '\n';
  }
  catch (const std::exception& ex){
    std::cout << "Couldnt convert: " << ex.what() << '\n';
  }
  // stol, stoll, stof, stod, stold (long, long long, float, double, long double)
  std::cout << "stof(\"123.456\") = " <<  std::stof("123.456") << '\n';

  return EXIT_SUCCESS;
}
