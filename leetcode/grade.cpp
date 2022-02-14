#include "grades.h"
#include <iostream>

size_t GradesDB::GetStudentCount() const {

}

GradesDB::AddResult GradesDB::Add(const std::string& name, const std::string& subject, double grade) {
    std::cout << "This is debug output " << name << "\n";
}

std::pair<bool, double> GradesDB::GetAverageForStudent(const std::string& name) const {

}

std::pair<bool, double> GradesDB::GetAverageForSubject(const std::string& subject) const {

}