#include<iostream>

int main(int argc, char const **argv) {
  // argc : number of arguments passed
  // **argv actual arguments starting at index 1

  std::cout << "Arguments count: " << argc << '\n';
  for (int i=1; i < argc; i++){
    std::cout << "arg " << i << ": "<< argv[i] << '\n';
  }

  return EXIT_SUCCESS;
}
