
#include <iostream>
#include <string>

using namespace std;

class Student 
{
public:
    string Name;
    int age;
    int gradelevel;
    double GPA; //average % of grades * 5
    char gender; //'m' or 'f'
    double grades[4];//[0] is English, [1] is Math, [2] is Science, [3] is Social Studies
    
    // constructor
    Student(string name, int Age, int Grade, char gen) 
    {
        Name = name;
        age = Age;
        gradelevel = Grade;
        gender = gen;
        GPA = 0;
        for(int i=0; i<4; i++) 
        {
            grades[i] = 0;
        }
    }
    
    // calculate GPA
    void calcGPA() 
    {
        double sum = 0;
        for(int i=0; i<4; i++) 
        {
            sum = sum + grades[i];
        }
        GPA = (sum/4) * 5;
    }
    
    // set grade for a course
    void setGrade(string course, double grade) 
    {
        if(course == "English") 
        {
            grades[0] = grade;
        } 
        else if(course == "Math") 
        {
            grades[1] = grade;
        } 
        else if(course == "Science") 
        {
            grades[2] = grade;
        } 
        else if(course == "Social Studies") 
        {
            grades[3] = grade;
        }
    }
    
    // print individual grades and GPA
    void printGrades() 
    {
        cout << Name << "'s grades: " << endl;
        cout << "English: " << grades[0] << endl;
        cout << "Math: " << grades[1] << endl;
        cout << "Science: " << grades[2] << endl;
        cout << "Social Studies: " << grades[3] << endl;
        cout << "GPA: " << GPA << endl;
    }
    
    // get GPA
    double getGPA() 
    {
        return GPA;
    }
    
    // get grade for a course
    double getGrade(string course) 
    {
        if(course == "English") 
        {
            return grades[0];
        } else if(course == "Math") 
        {
            return grades[1];
        } else if(course == "Science") 
        {
            return grades[2];
        } else if(course == "Social Studies") 
        {
            return grades[3];
        }
        return 0;
    }
    static void compareGrade(string grade, Student A, Student B)
    {
        cout << grade<< " : "<<endl;
        cout << A.Name << " : " << A.getGrade(grade) << endl; 
        cout << B.Name << " : " << B.getGrade(grade) << endl; 
        if(A.getGrade(grade) > B.getGrade(grade)) 
        {
            cout << A.Name << " has a higher grade by " <<(A.getGrade(grade)-B.getGrade(grade)) <<" points"<< endl;
        } 
        else if(A.getGrade(grade) < B.getGrade(grade)) 
        {
            cout << A.Name << " has a higher grade by " <<(B.getGrade(grade)-A.getGrade(grade)) <<" points"<< endl;
        } 
        else 
        {
            cout << "Both students have the same grade." << endl;
        }

    }
};

int main() 
{
    Student s1("John", 18, 12, 'm');
    s1.setGrade("English", 85);
    s1.setGrade("Math", 90);
    s1.setGrade("Science", 80);
    s1.setGrade("Social Studies", 75);
    s1.calcGPA();
    
    Student s2("Jane", 17, 11, 'f');
    s2.setGrade("English", 95);
    s2.setGrade("Math", 80);
    s2.setGrade("Science", 85);
    s2.setGrade("Social Studies", 90);
    s2.calcGPA();
    
    s1.printGrades();
    cout << endl;
    s2.printGrades();
    cout << endl;
    
    if(s1.getGPA() > s2.getGPA()) 
    {
        cout << s1.Name << " has a higher GPA by " << (s1.getGPA() - s2.getGPA()) << " points." << endl;
    } 
    else if(s1.getGPA() < s2.getGPA()) 
    {
        cout << s2.Name << " has a higher GPA by " << (s2.getGPA() - s1.getGPA()) << " points." << endl;
    } 
    else 
    {
        cout << "Both students have the same GPA." << endl;
    }
 
    
    cout << endl;
    Student::compareGrade("English", s1 ,s2);
    cout << endl;
    Student::compareGrade("Math", s1, s2);
    cout << endl;
    Student::compareGrade("Science", s1, s2);
    cout << endl;
    Student::compareGrade("Social Studies", s1, s2);

    return 0;
}
