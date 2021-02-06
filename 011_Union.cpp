#include<iostream>

union TestUnion { //total memory = 8 Byte (i.e. max(4,4,8))
  char a;
  int b;
  double c;
};

struct TestStruct {//total memory = 16 Byte (i.e. 4+4+8)
  char a;
  int b;
  double c;
};

int main(int argc, char const *argv[]) {
  TestStruct st;
  TestUnion un;
  std::cout << sizeof(st) << " Bytes" << '\n';
  std::cout << sizeof(un) << " Bytes" << '\n';

  //Initialize
  un.a = 'P';
  un.b = 2; // only one variable can be used, hence previous assingment is blank
  std::cout << un.b << '\n';
  return EXIT_SUCCESS;
}
