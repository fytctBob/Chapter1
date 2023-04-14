#include <iostream>
#include <string>
using namespace std;

class ClassRoom
{
private:
    string roomNumber;
    int capacity;
public:
    ClassRoom() {
        roomNumber = "";
        capacity = 0;
    }
    ClassRoom(string rn, int cap) {
        roomNumber = rn;
        capacity = cap;
    }
    void getRoomNumber(string& rn) {
        rn = roomNumber;
    }
    void setRoomNumber(string& rn) {
        roomNumber = rn;
    }
    void getCapacity(int& cap) {
        cap = capacity;
    }
    void setCapacity(int& cap) {
        capacity = cap;
    }
    void display() {
        cout << "Room number: " << roomNumber << endl;
        cout << "Capacity: " << capacity << endl;
    }
};

class Course {
private:
    string name;
    int score;
public:
    Course() {
        name = "";
        score = 0;
    }
    Course(string n, int s) {
        name = n;
        score = s;
    }
    void getName(string& n) {
        n = name;
    }
    void setName(string& n) {
        name = n;
    }
    void getScore(int& s) {
        s = score;
    }
    void setScore(int& s) {
        score = s;
    }
    void display() {
        cout << "Course name: "<< name << endl;
        cout << "Course score: " << score <<endl;
    }
};

class Student {
private:
    string name;
    int age;
    ClassRoom classRoom;
    Course course;
public:
    Student() {
        name = "";
        age = 0;
    }
    Student(string n, int a, ClassRoom cr, Course c) {
        name = n;
        age = a;
        classRoom = cr;
        course = c;
    }
    void getName(string& n) {
        n = name;
    }
    void setName(string& n) {
        name = n;
    }
    void getAge(int& a) {
        a = age;
    }
    void setAge(int& a) {
        age = a;
    }
    void getClassRoom(ClassRoom& cr) {
        cr = classRoom;
    }
    void setClassRoom(ClassRoom& cr) {
        classRoom = cr;
    }
    void getCourse(Course& c) {
        c = course;
    }
    void setCourse(Course& c) {
        course = c;
    }
    void display() {
        cout << "Student name: " << name << endl;
        cout << "Student age: " << age << endl;
        cout << "Classroom details: " << endl;
        classRoom.display();
        cout << "Course details: " << endl;
        course.display();
    }
};

int main() {
    string roomNumber, courseName, studentName;
    int capacity, courseScore, studentAge;

    cout << "Enter room number: ";
    cin >> roomNumber;
    cout << "Enter room capacity: ";
    cin >> capacity;
    ClassRoom cr(roomNumber, capacity);

    cout << "Enter course name: ";
    cin >> courseName;
    cout << "Enter course score: ";
    cin >> courseScore;
    Course c(courseName, courseScore);

    cout << "Enter student name: ";
    cin >> studentName;
    cout << "Enter student age: ";
    cin >> studentAge;
    Student s(studentName, studentAge, cr, c);
    s.display();

    return 0;
}