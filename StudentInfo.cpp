// StudentInfo.cpp  - 
// author: aaron pycraft
// date: 12-21-2016
// synopsis:

#include <string>

class StudentInfo {
  private:
    std::string name;
    int creditHours;
    double cumGPA;
  
  public:
    // setters
    void setName(const std::string newName);
    void setCreditHours(const int newCreditHours);
    void setCumGPA(const double newCumGPA);

    // getters
    std::string getName();
    int getCreditHours();
    double getCumGPA();
};
