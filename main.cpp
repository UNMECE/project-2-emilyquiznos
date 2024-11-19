#include "student.h"

int main() {
    std::vector<Art_Student *> art_students;
    std::vector<Physics_Student *> physics_students;

    std::vector<std::pair<std::string, std::string>> art_student_names = {
        {"Mateo", "Avalos"},
        {"Vincent", "Stout"},
        {"Eliza", "Peters"},
        {"Janelle", "Barrett"},
        {"Trent", "Hines"}
    };

    std::vector<std::pair<std::string, std::string>> physics_student_names = {
        {"Casey", "Sandoval"},
        {"Layne", "Wiley"},
        {"Matthew", "Fry"}
    };

    for (size_t i = 0; i < art_student_names.size(); i++) {
        Art_Student *art_student = new Art_Student();
        art_student->setName(art_student_names[i].first, art_student_names[i].second);
        art_student->setGPA(3.5 + i * 0.1);
        art_student->setGraduation(2025, "Spring");
        art_student->setEnrollment(2021, "Fall");
        art_student->setLevel("undergrad");
        art_student->setArtEmphasis(i % 3 == 0 ? "Art Studio" : (i % 3 == 1 ? "Art History" : "Art Education"));
        art_students.push_back(art_student);
    }

    for (size_t i = 0; i < physics_student_names.size(); i++) {
        Physics_Student *physics_student = new Physics_Student();
        physics_student->setName(physics_student_names[i].first, physics_student_names[i].second);
        physics_student->setGPA(3.6 + i * 0.05);
        physics_student->setGraduation(2026, "Fall");
        physics_student->setEnrollment(2022, "Spring");
        physics_student->setLevel("grad");
        physics_student->setConcentration(i % 2 == 0 ? "Biophysics" : "Earth and Planetary Sciences");
        physics_students.push_back(physics_student);
    }

    std::ofstream outfile("student_info.dat");
    if (outfile.is_open()) {
        for (const auto &student : art_students) {
            student->displayInfo(outfile);
        }
        for (const auto &student : physics_students) {
            student->displayInfo(outfile);
        }
        outfile.close();
    }

    for (auto student : art_students) {
        delete student;
    }
    for (auto student : physics_students) {
        delete student;
    }
    return 0;
}

