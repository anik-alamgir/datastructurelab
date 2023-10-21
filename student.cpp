#include <iostream>
#include <vector>

struct Student {
    int id;
    int semestersCompleted;
    int creditsCompleted;
    double cgpa;
};

int main() {
    std::vector<Student> students;

    // Initialize student records
    students.push_back({1, 3, 60, 3.8});
    students.push_back({2, 2, 40, 3.9});
    students.push_back({3, 4, 80, 3.6});
    students.push_back({4, 2, 55, 3.7});
    students.push_back({5, 3, 70, 3.9});
    students.push_back({6, 5, 100, 3.8});
    students.push_back({7, 1, 25, 3.5});
    students.push_back({8, 2, 45, 3.8});
    students.push_back({9, 3, 75, 3.9});
    students.push_back({10, 1, 30, 3.4});
    students.push_back({11, 2, 55, 3.7});
    students.push_back({12, 4, 90, 3.8});
    students.push_back({13, 1, 20, 3.3});
    students.push_back({14, 2, 38, 3.9});
    students.push_back({15, 3, 65, 3.8});

    std::cout << "Scholarship Students (CGPA >= 3.75): ";
    for (const Student& student : students) {
        if (student.cgpa >= 3.75) {
            std::cout << student.id << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Students with more than 50 credits completed: ";
    for (const Student& student : students) {
        if (student.creditsCompleted > 50) {
            std::cout << student.id << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Students with at least 2 semesters and 28 credits completed: ";
    for (const Student& student : students) {
        if (student.semestersCompleted >= 2 && student.creditsCompleted >= 28) {
            std::cout << student.id << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
