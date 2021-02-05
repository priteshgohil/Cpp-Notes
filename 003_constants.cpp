#include<iostream>

#define PERCENTILE 99.67F
#define PI 3.14159L

#define COUNT 75u //unsigned int
#define CASES 5000 //int
#define POPULATION 75ul //unsigned long
#define PROFIT 9000l //long

#define STATUS true
#define NEWLINE '\n'

#define HEX 0xA //hexadecimal

int main (){
  std::cout << "Area: " << 2*PI*PERCENTILE << '\n';
  std::cout << "hexadecimal: " << std::hex << std::uppercase << HEX << '\n';
}
