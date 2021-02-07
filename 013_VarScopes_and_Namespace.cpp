#include<iostream>
using namespace std;

// Memory Segments
// https://ozh.github.io/ascii-tables/

// +--------+------------------------------------------+
// | FFFFh  |                                          |
// |        |                                          |
// | Static | Local variables                          |
// |        | Parsed arguments to function             |
// |        | Recursive function call                  |
// +--------+------------------------------------------+
// |        |                                          |
// | Heap   |                                          |
// |        | Dynamically allocated variables/memory   |
// +--------+------------------------------------------+
// |        | Initialized variable Local/Global        |
// |        |                                          |
// |        |------------------------------------------+
// | Data   |                                          |
// |        | .bss (uninitialized variables)           |
// |        | global, static, extern variables         |
// |        | Note: not occupying but only in .obj file|
// +--------+------------------------------------------+
// |        |                                          |
// |        |                                          |
// | Text   | compiled program                         |
// |        | Machine code                             |
// | 0000h  | Crt.o (startup routine                   |
// +--------+------------------------------------------+



namespace MyNamesapce {
  int a, b;
  long int lnNum = 10;
  int sum(int num1, int num2){
    return num1+num2;
  }
}

// variable scopes
int x = 55;         //global scope
void increment (int num){
  cout << "Increment " << num << " by 1 = " << ++num << endl;
  // increment(++num);         // stack overflow, cz function pointers and local
                            // variables are stored in stack
}

int main(int argc, char const *argv[]) {
  cout << "using only \"cout\" instead of \"std::cout\"" << '\n';
  cout << "MyNamesapce::lnNum = " << MyNamesapce::lnNum << endl;
  // access namespace items
  using namespace MyNamesapce;
  cout << "lnNum = " << MyNamesapce::lnNum << endl; //scope resolution operator not req.
  cout << "sum of 5 + 7 = " << sum(5,7)<< '\n';
  // namespace aliasing
  namespace NewName = MyNamesapce;
  cout << "sum of 5 + 7 = " << NewName::sum(5,7)<< '\n';

  // Scope of variables
  cout << "x = " << x << '\n';
  int x = 5;                        // local scope
  {
    int x = 10;                     // inner scope
    cout << "x = " << x << '\n';
  }
  cout << "x = " << x << '\n';

  // stackoverflow error
  increment(1);
  return 0;
}
