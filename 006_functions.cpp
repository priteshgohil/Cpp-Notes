#include<iostream>

long int Add (int nVar1, int nVar2) {
  return nVar1+nVar2;
}

int Substract (int nVar1, int nVar2){
  return nVar1-nVar2;
}

void SayHello(void){
  std::cout << "Hello, I'm a Function/Method." << '\n';
}

int main(int argc, char const *argv[]) {
  long int lnResult;
  lnResult = Add(5,2);
  std::cout << "Addition: " << lnResult << '\n';

  std::cout << "Substraction: " << Substract(10,7) << '\n';

  SayHello();

  return EXIT_SUCCESS;
}
