//  main.cpp 
//  GPA calculator program
//  author: aaron pycraft
//  date: 12-21-2016
//  synopsis: Prompts user for input to calculate/estimate cumulative gpa

/* enhancements:
  - compare this gpa to other students in database
  - run code on website, accessible to public
*/ 
#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
//#include "grade.h"
//#include "Student_info.h"

using std::cin;            using std::setprecision;
using std::cout;           using std::sort;
using std::domain_error;   using std::streamsize;
using std::endl;           using std::string;
using std::max;            using std::vector;

int main() {
  // prompt for background input
    // enter student name
    // enter # credit hours earned
    // enter cumulative gpa
  // enter current course info:
    // enter course i name:
    // enter course i # credit hours
    // enter course i expected grade
  // compute semester gpa
  // compute new cumulative gpa
  
  return 0;
}

/* 
 *  Populates StudentInfo objet with:
 *  - name, cumulative gpa, # credit hours earned
 */
istream& read_user_input(istream& in, StudentInfo& s) {
  string name;
  int creditHours;
  double cumGPA;

  std::cout << "Enter student name, # credit hours, cum. gpa:" << std::endl;
  
  cin >> name >> creditHours >> cumGPA;


 
  return in;
}
 
