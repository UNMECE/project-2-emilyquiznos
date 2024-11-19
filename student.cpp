#include "student.h"

Student::Student() : gpa(0.0), graduation_year(0), enrolled_year(0), level("undergrad") {}

Student::~Student() {}

void Student::setName(const std::string &first, const std::string &last) {
    first_name = first;
    last_name = last;
}

void Student::setGPA(double gpa_value) {
    gpa = gpa_value;
}

void Student::setGraduation(int year, const std::string &semester) {
    graduation_year = year;
    graduation_semester = semester;
}

void Student::setEnrollment(int year, const std::string &semester) {
    enrolled_year = year;
    enrolled_semester = semester;
}

void Student::setLevel(const std::string &level_value) {
    level = level_value;
}

std::string Student::getName() const {
    return first_name + " " + last_name;
}

double Student::getGPA() const {
    return gpa;
}

int Student::getGraduationYear() const {
    return graduation_year;
}

std::string Student::getGraduationSemester() const {
    return graduation_semester;
}

int Student::getEnrolledYear() const {
    return enrolled_year;
}

std::string Student::getEnrolledSemester() const {
    return enrolled_semester;
}

std::string Student::getLevel() const {
    return level;
}

// if art student
Art_Student::Art_Student() : art_emphasis("Art Studio") {}

void Art_Student::setArtEmphasis(const std::string &emphasis) {
    art_emphasis = emphasis;
}

std::string Art_Student::getArtEmphasis() const {
    return art_emphasis;
}

void Art_Student::displayInfo(std::ostream &out) const {
    out << "Name: " << getName() << "\n"
        << "GPA: " << getGPA() << "\n"
        << "Graduation: " << getGraduationSemester() << " " << getGraduationYear() << "\n"
        << "Enrolled: " << getEnrolledSemester() << " " << getEnrolledYear() << "\n"
        << "Level: " << getLevel() << "\n"
        << "Art Emphasis: " << art_emphasis << "\n\n";
}

// if physic student
Physics_Student::Physics_Student() : concentration("Biophysics") {}

void Physics_Student::setConcentration(const std::string &concentration_value) {
    concentration = concentration_value;
}

std::string Physics_Student::getConcentration() const {
    return concentration;
}

void Physics_Student::displayInfo(std::ostream &out) const {
    out << "Name: " << getName() << "\n"
        << "GPA: " << getGPA() << "\n"
        << "Graduation: " << getGraduationSemester() << " " << getGraduationYear() << "\n"
        << "Enrolled: " << getEnrolledSemester() << " " << getEnrolledYear() << "\n"
        << "Level: " << getLevel() << "\n"
        << "Concentration: " << concentration << "\n\n";
}
