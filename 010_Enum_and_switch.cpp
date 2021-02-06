#include<iostream>

enum WeekDays {
  Monday,         // 0
  Tuesday,        // 1
  Wednesday=5,    // 5
  Thurday,        // 6
  Friday,         // 7
  Saturday,       // 8
  Sunday         // 9
};

int main(int argc, char const *argv[]) {
  WeekDays enWeek_days = WeekDays::Friday;
  // WeekDays enWeek_days = Friday; //valid
  std::cout << WeekDays::Tuesday << '\n'; //should output 1

  switch (enWeek_days) {
    case WeekDays::Monday:
      std::cout << "Today is Monday" << '\n';
      break;
    case WeekDays::Tuesday:
    case WeekDays::Friday:
      std::cout << "Today is Friday" << '\n';
      break;
  }


  return EXIT_SUCCESS;
}
