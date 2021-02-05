#include<iostream>

int main() {
  unsigned int bHEXA = 0x7;
  int A = 10;
  int B = 20;
  int result;
  float C,D;
  C = 20.0;
  D = 10.0;

  // Arithmetic operators: +, -, *, /, %
  std::cout << "Arithmetic operator:" << D/C << '\n';

  //Compound operators: +=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=
  bHEXA >>= 1; //right shift by 1
  std::cout << "right shift 0x7 by 1 : " << std::hex << std::uppercase << \
                                            bHEXA << '\n';
  bHEXA <<=1;
  bHEXA &= 0x4;
  std::cout << "bitwise AND 0x7 & 0x4 = " << bHEXA<< '\n';

  //Logical operator &&, ||, !
  std::cout << ((A==10) && (B==A)) << '\n';
  std::cout << ((A==10) || (B==A)) << '\n';
  std::cout << !((A==10) && (B==20)) << '\n';

  //Conditional ternary operator ?:
  std::string test = A==B ? "Yes" : "No";
  std::cout << test << '\n';

  //Bitwise operator &, |, ^, ~, <<, >>
  bHEXA = 0x7;
  std::cout << "NOT of " <<bHEXA <<" = " << ~bHEXA << '\n'; //NOT
  std::cout << bHEXA <<" XOR 0x5 = "  << (bHEXA^0x5) << '\n'; //XOR
  std::cout << "right shift "<< bHEXA << " by 1 = " <<(bHEXA >> 1) << '\n';

  //Excplicit tpyes
  float ft = 12.983;
  int converted = (int) ft;
  std::cout << "Typecast " << ft << " to int: " << std::dec << converted << '\n';

  return EXIT_SUCCESS;
}
