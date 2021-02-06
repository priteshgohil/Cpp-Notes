#include<iostream>
#include<string>

int main(int argc, char const *argv[]) {
  // if statement
  std::cout << "\nif" << '\n';
  int nCount = 500;
  if (nCount == 500){
    std::cout << "If condition is True" << '\n';
  }

  // if .. else
  std::cout << "\nif .. else" << '\n';
  if (nCount == 200){
    std::cout << "Block of If statement" << '\n';
  }
  else {
    std::cout << "Else part is executed" << '\n';
  }

  // if.. else if.. else
  std::cout << "\nif .. else if .. else" << '\n';
  int nSize = 30;
  if (nSize > 50){
    std::cout << "Size is > 50" << '\n';
  }
  else if (nSize < 0) {
    std::cout << "Size is < 0" << '\n';
  }
  else{
    std::cout << "Size is between 0 and 50" << '\n';
  }

  //Iteration: while loop
  std::cout << "\nwhile loop" << '\n';
  nCount = 3;
  while (nCount-- > 0) {
    std::cout << "Counter is: " << nCount << '\n';
  }

  // Iteration: do .. while loop
  std::cout << "\ndo .. while loop" << '\n';
  nCount = 3;
  do {
    std::cout << "Counter is: " << nCount << '\n';
  } while(nCount-- > 0);

  // Iteration: for loop
  std::cout << "\nfor loop" << '\n';
  nCount = 3;
  for (size_t i = 0; i < nCount; i++) {
    std::cout <<  "Loop iteration; " << i << '\n';
  }

  std::cout << "\nfor loop: Range based" << '\n';
  std::string sLine = "Hello World";
  for (char c: sLine) {
    std::cout << c << '\n';
  }


  // break
  std::cout << "\nbreak statement" << '\n';
  nCount = 0;
  while(true) {
    std::cout << "Iterate forever" << '\n';
    nCount++;
    if (nCount ==1){
      break;
    }
  }

  // Continue
  std::cout << "\ncontinue statement" << '\n';
  nCount = 3;
  for (size_t i = 0; i <= nCount; i++) {
    if (i==2){
      continue;
    }
    std::cout << "Iteration : " << i  << '\n';
  }

  // Switch (NOTE: WORKS ONLY WITH Integer)
  std::cout << "\nSwitch case" << '\n';
  int nCase = 5;
  switch (nCase) {
    case 1:
      std::cout << "12*1 = " << 12*1 << '\n';
      break;
    case 2:
      std::cout << "12*2 = " << 12*2 << '\n';
      break;
    case 5:
      std::cout << "12*5 = " << 12*5 << '\n';
      break;
    default:
      std::cout << "please provide valid case" << '\n';
  }

  return EXIT_SUCCESS;
}
