#include<iostream>
#include<math.h> //math.h - symbols imported in global namespace
//cmath - c++ equivalent c header file.  symbols inported in std namespace


// Function declation
double ScalarProduct   (double [], double [], int);
double ArraySum        (double [], int);
double ArrayNorm       (double [], int);
void PrintArrayVert    (double [], int );

int main(int argc, char const *argv[]) {
  double dArr1[] = {1.0, 2.0, 3.0, 4.0};
  double dArr2[] = {4.0, 3.0, 2.0, 1.0};
  int nArr2D[3][4] = { {0,1,2}, {4,5,6,7}, {8,9,10,11} };

  int nSize = sizeof(dArr1)/sizeof(*dArr1);
  PrintArrayVert(dArr1, nSize);
  std::cout << "\nArray Product = " << ScalarProduct(dArr1, dArr2, nSize) << '\n';
  std::cout << "\nArray Sum = " << ArraySum(dArr1, nSize) << '\n';
  std::cout << "\nArray Norm = " << ArrayNorm(dArr1, nSize) << '\n';

  return 0;
}

// Function definition
// double ScalarProduct (double )

void PrintArrayVert(double dArr[], int nSize){
  for (int i = 0; i <= nSize-1; i++){
    std::cout << "v[" << i << "] = " << dArr[i] << '\n' ;
  }
}

double ScalarProduct(double dArr1[], double dArr2[], int nSize){
  double dSum = 0.0;
    for (int i = 0; i <= nSize -1; i++){
      dSum = dSum + dArr1[i] * dArr2[i];
    }
  return dSum;
}

double ArraySum(double dArr[], int nSize){
  double dSum = 0.0 ;
  for (int i = 0; i <= nSize - 1; i++){
    dSum = dSum + dArr[i];
  }
  return dSum;
}

double ArrayNorm(double dArr[], int nSize){
  double dSum = 0.0 ;

  for (int i = 0; i <= nSize - 1; i++){
    dSum = dSum + dArr[i] * dArr[i];
  }
  return sqrt(dSum);
}
