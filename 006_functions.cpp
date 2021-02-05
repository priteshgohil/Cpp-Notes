#include<iostream>

long int add (int nVar1, int nVar2) {
  return nVar1+nVar2;
}

int substract (int nVar1, int nVar2){
  return nVar1-nVar2;
}

void say_hello(void){
  std::cout << "Hello, I'm a Function/Method." << '\n';
}

int main(int argc, char const *argv[]) {
  long int lnResult;
  lnResult = add(5,2);
  std::cout << "Addition: " << lnResult << '\n';

  std::cout << "Substraction: " << substract(10,7) << '\n';

  say_hello();

  return EXIT_SUCCESS;
}
