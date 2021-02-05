#include<iostream>
#include<string>
#include <math.h>

int main () {
  // Integer
  int nSum (1);  //Initialize
  short int snVar1 = 14;
  long int lnVar2 = 553;
  long long int llnVar3 = -4454;
  unsigned int unCount = 56;
  unsigned short int usnVar4 = 6435;
  unsigned long int ulnVar5 = 73;
  unsigned long long int ullnVar6 = 821;

  std::cout << "int is: " << nSum << " and size is: " << sizeof(nSum) << \
  " Byte" << '\n';
  std::cout << "short int is: " << snVar1 << " and size is: " << sizeof(snVar1)\
  << " Byte" << '\n';
  std::cout << "long int is: " << lnVar2 << " and size is: " << sizeof(lnVar2)\
  << " Byte" << '\n';
  std::cout << "long long int is: " << llnVar3 << " and size is: " \
  << sizeof(llnVar3) << " Byte" << '\n';
  std::cout << "unsigned int: " << unCount << " and size is: " << sizeof(unCount)\
  << " Byte" << '\n';
  std::cout << "unsigned short int: " << usnVar4 << " and size is: " \
  << sizeof(usnVar4) << " Byte" << '\n';
  std::cout << "unsigned long int: " << ulnVar5 << " and size is: " \
  << sizeof(ulnVar5) << " Byte" << '\n';
  std::cout << "unsigned long long int: " << ullnVar6 << " and size is: " \
  << sizeof(ullnVar6) << " Byte" << "\n \n";

  float fPercentage = 50.66;
  double dPrice = 1e-3;
  long double ldPI = M_PI;
  std::cout << "float is: " << fPercentage << " and size is: " << \
  sizeof(fPercentage) << " Byte" << '\n';
  std::cout << "double is: " << dPrice << " and size is: " << \
  sizeof(dPrice) << " Byte" << '\n';
  std::cout << "long double is: " << ldPI << " and size is: " << \
  sizeof(ldPI) << " Byte" << "\n \n";

  bool bStatus = true;
  std::cout << "bool is: " << bStatus << " and size is: " << sizeof(bStatus) <<\
  " Byte" << "\n \n";

  char cByte = 'P'; // or =u8'a'
  char16_t cByte2 = u'R';
  char32_t cByte4 = U'I';
  std::cout << "char is: " << cByte << " and size is: " << sizeof(cByte) << \
  " Byte" << "\n";
  std::cout << "char16_t is: " << cByte2 << " and size is: " << sizeof(cByte2) \
  << " Byte" << "\n";
  std::cout << "char32_t is: " << cByte4 << " and size is: " << sizeof(cByte4) \
  << " Byte" << "\n";


  std::string sLine ;
  sLine = "This is a String variable";

  std::cout << "Enter Input integer: "  << '\n';
  std::cin >>unCount;
  if(!std::cin.good()){
			std::cerr << "Invalid input." << "\n";
	}
  else {
    nSum += unCount; //https://stackoverflow.com/a/30036580/10451749
    std::cout << "Sum is: " << nSum << '\n';
  }

  std::cout << "Enter String Message: " << '\n';
  // std::cin >> sLine;
  std::cin.ignore(); //ignore '\n' character in the stream left by previous read
  getline (std::cin, sLine);
  std::cout << sLine << '\n';
  return EXIT_SUCCESS;

}
