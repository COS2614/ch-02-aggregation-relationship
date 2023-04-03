#include <iostream>
#include <string>
#include <vector>

class Course {
public:
    Course(std::string courseName) : name(courseName) {}
    std::string getName() { return name; }
private:
    std::string name;
};

class Student {
public:
    Student(std::string studentName) : name(studentName) {}
    void addCourse(Course* course) { courses.push_back(course); }
    void printCourses() {
        std::cout << name << "'s courses:" << std::endl;
        for (Course* course : courses) {
            std::cout << " - " << course->getName() << std::endl;
        }
    }
private:
    std::string name;
    std::vector<Course*> courses;
};

class Teacher {
public:
    Teacher(std::string teacherName) : name(teacherName) {}
    void addCourse(Course* course) { courses.push_back(course); }
    void printCourses() {
        std::cout << name << "'s courses:" << std::endl;
        for (Course* course : courses) {
            std::cout << " - " << course->getName() << std::endl;
        }
    }
private:
    std::string name;
    std::vector<Course*> courses;
};

int main() {
    Course math("Math");
    Course english("English");
    Course history("History");

    Student alice("Alice");
    alice.addCourse(&math);
    alice.addCourse(&english);

    Student bob("Bob");
    bob.addCourse(&math);
    bob.addCourse(&history);

    Teacher msJones("Ms. Jones");
    msJones.addCourse(&math);
    msJones.addCourse(&english);

    Teacher mrSmith("Mr. Smith");
    mrSmith.addCourse(&history);

    alice.printCourses();
    bob.printCourses();
    msJones.printCourses();
    mrSmith.printCourses();

    return 0;
}
