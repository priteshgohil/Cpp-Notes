#include <iostream>
#include <string>
#include <map>

int main(int argc, char const *argv[]) {
  std::map<std::string, int>  age;
  age["Fred"] = 42;                     // Fred is 42 years old
  age["Barney"] = 37;                   // Barney is 37 years old
  age.insert( std::pair<std::string,int>("pritesh", 25) ); //insert at the end
  std::map<std::string,int>::iterator it = age.begin();
  age.insert(it, std::pair<std::string,int>("Mark", 40) ); //insert at the begin
  age.insert(it, std::pair<std::string,int>("Leo", 69) ); //insert at the begin

  if (1){
    ++ age["Fred"];
  }
  std::cout << "Fred is " << age["Fred"] << " years old\n";

  for (auto& x: age) {
    std::cout << x.first << " = " << x.second << '\n';
  }

  std::cout << "\nUsing complete for loop" << '\n';
  for (std::map<std::string,int>::iterator it=age.begin(); it!=age.end(); ++it)
  {
    std::cout << it->first << " = " << it->second << '\n';
  }
  return EXIT_SUCCESS;
}
