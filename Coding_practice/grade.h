#ifndef GRADES_H    
#define GRADES_H

#include <vector>
#include <map>
#include <string>

// This file is read-only. Any changes made to this file will be ignored.

struct Student {
    std::string name_;
    std::map<std::string, double> grades_;
};

class GradesDB {
public:
    size_t GetStudentCount() const;

    enum class AddResult { NewEntry, NewGrade, GradeOverwritten };
    AddResult Add(const std::string& name, const std::string& subject, double grade);
    
    std::pair<bool, double> GetAverageForStudent(const std::string& name) const;
    std::pair<bool, double> GetAverageForSubject(const std::string& subject) const;
private:
    std::vector<Student> database_;
};

#endif