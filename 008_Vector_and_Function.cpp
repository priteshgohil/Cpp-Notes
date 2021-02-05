#include <iostream>
#include <vector>
// #include <numeric> //std::iota

// Compared to Arrays, Vectors are not memory efficient and time consuming to
// access vector elements

void Reverse(const std::vector<int>&);
void PrintVectorVert (const std::vector<int>&); //Always pass by reference,
//cz saves a lot of memory. also you always dont need a copy of vector

int main(int argc, char const *argv[]) {

  // Initialize
  std::vector<int> nVect1;          // Empty vector
  std::vector<int> nVect2 (100, 1);  // A vector containing 100 items: All 1s.
  std::vector<int> nVect3 {100, 1};  // A vector containing 2 items: 100 and 1.
  std::vector<int> nVect4 (nVect3.begin(), nVect3.end()); //iterate nVect3 & fill
  std::vector<int> nVect5 (nVect4);  // Copy nVect4

  // Vector from ArraySum
  double dArr1[] = {1.0, 2.0, 3.0, 4.0};
  std::vector<double> dVect6 (dArr1, dArr1 + sizeof(dArr1)/sizeof(*dArr1));

  PrintVectorVert(nVect3);
  nVect3.push_back(11); //insert at the end of vector
  nVect3.push_back(22);
  nVect3.insert(nVect3.begin(), 999); //insert element before specified index
  nVect3.insert(nVect3.begin()+3, 555);
  std::cout << nVect3.at(2) << '\n';  //vector value at given index
  std::cout << nVect3.size() << '\n'; //vector size
  PrintVectorVert(nVect3);

  //Erase vector
  nVect3.erase(nVect3.begin()+2); //remove element at given index
  std::cout << "\nRemove 3rd vector element" << '\n';
  PrintVectorVert(nVect3);
  Reverse(nVect3);

  // Clear vector
  // nVect3.erase(nVect3.begin(), nVect3.end()); //Erase everything
  nVect3.clear();
  std::cout << "\nClear all vector element" << '\n';
  std::cout << "Empty? " << nVect3.empty() << '\n';


  // std::vector<int> nX(10);
  // std::iota(std::begin(nX), std::end(nX), 0);//range of 0 to 9; 0 starting num

  return EXIT_SUCCESS;
}


void PrintVectorVert (const std::vector<int>& nVect){
  std::cout << "\n";
  for(unsigned int i = 0; i < nVect.size(); i++) {
    std::cout << "v[" << i << "] = " << nVect[i] << '\n';
  }
}

void Reverse(const std::vector<int>& nVect){
  std::cout << "\nReveresed vector" << std::endl;
  for (size_t i = nVect.size(); i >0; i--) { //size_t: unsigned integer
    std::cout << "v[" << i-1 << "] = " << nVect[i-1] << '\n';
  }
}
