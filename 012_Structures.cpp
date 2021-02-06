#include<iostream>


struct Point {
  int x,y;
};

struct Shelf {
  const char *title;
  const char *author;
  union {
    float dollars;
    int euro;
  };
  enum {
    Dollars = 1,
    Euro = 2
  } currency;
}book;


enum Side { Left, Right };
struct House {
  const char *adresse;
  unsigned int nHouse_num;
  Side enSide;
};

int main(int argc, char const *argv[]) {
  struct Point stPoint; //struct keyword optional in c++, but must in C
  stPoint.x = 33;
  stPoint.y = 50;
  std::cout << stPoint.x << '\n';

  Point stPoint2 = {5,10}; // x=5 and y=10
  Point stPoint3[40] = {}; //array of structure i.e. 40 points
  std::cout << stPoint3[0].x << '\n';

  // strcpy(book.title, "Live Good");
  book.title = "Live Good";
  book.author = "Unknown";
  book.euro = 25.3;
  book.currency = Shelf::Euro;
  std::cout << book.title << '\n';

  //declare enum inside stucture
  House stHouse;
  stHouse.adresse = "Max Müller";
  stHouse.nHouse_num = 123;
  stHouse.enSide = Left; // or Side::Left
  House stPeter = {"Peter Klein", 124, Right};
  std::cout << stPeter.adresse << '\n';


  return EXIT_SUCCESS;
}
