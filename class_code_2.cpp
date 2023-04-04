#include <iostream>
#include <string>

using namespace std;

class Staff {
    protected:
        int code;
        string name;
    
    public:
        void get_staff_info() {
            cout << "Enter code: ";
            cin >> code;
            cout << "Enter name: ";
            cin >> name;
        }
};

class Teacher : virtual public Staff {
    private:
        string subject;
        int publication;
    
    public:
        void get_teacher_info() {
            get_staff_info();
            cout << "Enter subject: ";
            cin >> subject;
            cout << "Enter publication: ";
            cin >> publication;
        }
        
        void display_teacher_info() {
            cout << "Code: " << code << endl;
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Publication: " << publication << endl;
        }
};

class Officer : virtual public Staff {
    private:
        string grade;
    
    public:
        void get_officer_info() {
            get_staff_info();
            cout << "Enter grade: ";
            cin >> grade;
        }
        
        void display_officer_info() {
            cout << "Code: " << code << endl;
            cout << "Name: " << name << endl;
            cout << "Grade: " << grade << endl;
        }
};

class Typist : virtual public Staff {
    protected:
        int speed;
        int daily_wages;
    
    public:
        void get_typist_info() {
            get_staff_info();
            cout << "Enter speed: ";
            cin >> speed;
            cout << "Enter daily wages: ";
            cin >> daily_wages;
        }
        
        void display_typist_info() {
            cout << "Code: " << code << endl;
            cout << "Name: " << name << endl;
            cout << "Speed: " << speed << endl;
            cout << "Daily Wages: " << daily_wages << endl;
        }
};

class RegularTypist : virtual public Typist {
    public:
        void get_regular_typist_info() {
            get_typist_info();
        }
        
        void display_regular_typist_info() {
            display_typist_info();
        }
};

class CasualTypist : virtual public Typist {
    public:
        void get_casual_typist_info() {
            get_typist_info();
        }
        
        void display_casual_typist_info() {
            display_typist_info();
        }
};

int main() {
    Teacher t;
    Officer o;
    RegularTypist rt;
    CasualTypist ct;
    
    cout << "Enter teacher information:" << endl;
    t.get_teacher_info();
    cout << endl << "Teacher information:" << endl;
    t.display_teacher_info();
    
    cout << endl << "Enter officer information:" << endl;
    o.get_officer_info();
    cout << endl << "Officer information:" << endl;
    o.display_officer_info();
    
    cout << endl << "Enter regular typist information:" << endl;
    rt.get_regular_typist_info();
    cout << endl << "Regular typist information:" << endl;
    rt.display_regular_typist_info();
    
    cout << endl << "Enter casual typist information:" << endl;
    ct.get_casual_typist_info();
    cout << endl << "Casual typist information:" << endl;
    ct.display_casual_typist_info();
    
    return 0;
}
