#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class Student {
protected:
    std::string first_name;
    std::string last_name;
    double gpa;
    int graduation_year;
    std::string graduation_semester;
    int enrolled_year;
    std::string enrolled_semester;
    std::string level; 

public:
    Student();
    virtual ~Student();

    void setName(const std::string &first, const std::string &last);
    void setGPA(double gpa_value);
    void setGraduation(int year, const std::string &semester);
    void setEnrollment(int year, const std::string &semester);
    void setLevel(const std::string &level);

    std::string getName() const;
    double getGPA() const;
    int getGraduationYear() const;
    std::string getGraduationSemester() const;
    int getEnrolledYear() const;
    std::string getEnrolledSemester() const;
    std::string getLevel() const;
    
    virtual void displayInfo(std::ostream &out) const = 0;
};

class Art_Student : public Student {
private:
    std::string art_emphasis; 

public:
    Art_Student();
    void setArtEmphasis(const std::string &emphasis);
    std::string getArtEmphasis() const;
    void displayInfo(std::ostream &out) const override;
};

class Physics_Student : public Student {
private:
    std::string concentration; 

public:
    Physics_Student();
    void setConcentration(const std::string &concentration_value);
    std::string getConcentration() const;
    void displayInfo(std::ostream &out) const override;
};
