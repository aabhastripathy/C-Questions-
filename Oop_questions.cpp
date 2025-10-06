Q.1.

#include <iostream>
using namespace std;

class Student {
private:
    int student_id;
    char name[50];  
    float score;

public:
   
    Student(int id, const char student_name[], float student_score) {
        student_id = id;
       
        int i = 0;
        while (student_name[i] != '\0' && i < 49) {
            name[i] = student_name[i];
            i++;
        }
        name[i] = '\0';  
        score = student_score;
    }

    void details() {
    	
    	cout << "Student Details:"<< endl;
        cout << "ID: "<<student_id<<endl;
        cout << "Name: " << name << endl;
        cout << "Score: "<< score << endl;
    }
};

int main() {

    Student student1(101, "John Doe", 85.5);
    student1.details();

    return 0;
}




Q.2.

#include <iostream>
#include <string>
using namespace std;

class LibraryBook {
private:
    string title;
    string author;
    string isbn;  

public:
 
    LibraryBook(const string& t, const string& a) {
        title = t;
        author = a;
        isbn = "";  
        cout<<"Book '"<<title<< "' by '"<<author<<"' created." <<endl;
    }

    LibraryBook(const string& t, const string& a, const string& i) {
        title = t;
        author = a;
        isbn = i;
        cout << "Book '"<<title<<"' by '"<<author<<"' with ISBN '"<<isbn<< "' created."<<endl;
    }

    ~LibraryBook() {
        cout << "Book '"<<title<<"' is being destroyed."<<endl;
    }
};

int main() {
    {
        LibraryBook book1("The Hobbit", "J.R.R. Tolkien");
        LibraryBook book2("C++ Primer", "Stanley B. Lippman", "978-0-321-71411-4");
      
    }
    return 0;
}


Q.3.


#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string name;
    int id;
    double price;

public:

    Product() {
        name = "";
        id = 0;
        price = 0.0;
    }
    void input_details() {
        cout << "Enter product name: ";
        getline(cin, name);  
        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter product price: $";
        cin >> price;
        cin.ignore();  
    }

    void display_details(int product_num) {
        cout<< "Product " << product_num << ": " <<name<< " (ID: " << id << ", Price: $" << price << ")"<<endl;
    }
};


int main() {
    const int NUM_PRODUCTS = 3;  
    Product products[NUM_PRODUCTS];  
    for (int i = 0; i < NUM_PRODUCTS; ++i) {
        cout<< "\nEnter details for Product "<<(i + 1) <<":"<< endl;
        products[i].input_details();
    }

    cout<< "\nProduct Inventory:" <<endl;
    for (int i = 0; i < NUM_PRODUCTS; ++i) {
        products[i].display_details(i + 1);
    }

    return 0;
}



Q.4.

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a,double b) {
        return a + b;
    }

    double add(int a, int b,double c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    int sum1 = calc.add(5,10);
    double sum2 = calc.add(5.5,10.5);
    double sum3 = calc.add(5, 10,15.5);

    cout << "Sum of 5 and 10 is: " << sum1 << endl;
    cout << "Sum of 5.5 and 10.5 is: " << sum2 << endl;
    cout << "Sum of 5, 10, and 15.5 is: " << sum3 << endl;

    return 0;
}


Q.5.

#include <iostream>
using namespace std;

class Vector2D {
private:
    int x, y;

public:
    Vector2D(int x = 0, int y=0) : x(x), y(y) {}

    Vector2D operator+(const Vector2D& other) {
        return Vector2D(x + other.x, y + other.y);
    }

    void display() const {
        cout<< "(" << x << ", " << y << ")" <<endl;
    }
};

int main() {
    Vector2D A(2, 3);
    Vector2D B(5, 7);
    Vector2D result = A + B;

    cout << "Resultant Vector: ";
    result.display();

    return 0;
}



Q.6.

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    string employee_id;

public:
    Employee(string name, string id) : name(name), employee_id(id) {}

    virtual void display_info() {
        cout<<"Employee Name: " <<name<<endl;
        cout<< "Employee ID: " <<employee_id<<endl;
    }
};

class Manager : public Employee {
private:
    int team_size;

public:
    Manager(string name, string id, int team_size) : Employee(name, id), team_size(team_size) {}

    void display_info() {
        Employee::display_info();
        cout<<"Team Size: "<<team_size<<endl;
    }
};

int main() {
    string name, id;
    int team_size;

    cout<<"Enter Manager Name: ";
    getline(cin, name);
    cout<<"Enter Employee ID: ";
    getline(cin, id);
    cout<<"Enter Team Size: ";
    cin>>team_size;

    Manager manager(name, id, team_size);
    manager.display_info();

    return 0;
}


Q.7.


#include <iostream>
#include <string>
using namespace std;

class person {
protected:
    string name;
    int age;

public:
    person(string name, int age) : name(name), age(age) {}

    void display_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person {
protected:
    string student_id;

public:
    student(string name, int age, string student_id) : person(name, age), student_id(student_id) {}

    void display_info() {
        person::display_info();
        cout<<"Student ID: "<<student_id<<endl;
    }
};

class GraduateStudent : public student {
private:
    string thesis_title;

public:
    GraduateStudent(string name, int age, string student_id, string thesis_title)
        : student(name, age, student_id), thesis_title(thesis_title) {}

    void display_info() {
        student::display_info();
        cout << "Thesis Title: " << thesis_title << endl;
    }
};

int main() {
    string name, student_id, thesis_title;
    int age;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore();  
    cout << "Enter Student ID: ";
    getline(cin, student_id);
    cout << "Enter Thesis Title: ";
    getline(cin, thesis_title);

    GraduateStudent gradStudent(name, age, student_id, thesis_title);
    gradStudent.display_info();

    return 0;
}




Q.8.

#include <iostream>
using namespace std;

class Subscription {
public:
    virtual double calculate_bill() = 0;  
    virtual ~Subscription() {}  
};
class BasicSubscription : public Subscription {
public:
    double calculate_bill() {
        return 10.0;  
    }
};
class PremiumSubscription : public Subscription {
public:
    double calculate_bill() {
        return 25.0;  
    }
};

int main() {
    const int num_subscriptions = 2;
    
    Subscription* subscriptions[num_subscriptions];
    subscriptions[0] = new BasicSubscription();
    subscriptions[1] = new PremiumSubscription();

    for (int i=0; i<num_subscriptions; ++i) {
        cout << "Monthly bill for subscription " << (i + 1) << ": $" <<subscriptions[i]->calculate_bill()<<endl;
    }

    for (int i = 0; i < num_subscriptions; ++i) {
        delete subscriptions[i];
    }
    return 0;
}


Q.9.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout<<"Depositing $"<<amount<<"..." <<endl;
        }
    }

    friend void perform_audit(BankAccount& account);
};

void perform_audit(BankAccount& account) {
    cout<<"Audit performed. Audited Balance: $"<<account.balance<<endl;
}

int main() {
    BankAccount account;
    cout << "Initial Balance: 0" <<endl;
    account.deposit(500);
    cout << "Current Balance: 500"<<endl;
    perform_audit(account);

    return 0;
}

Q.10.

#include <iostream>
using namespace std;

class Document {
public:
    virtual void print() = 0;
    virtual ~Document() {}
};

class PDFDocument : public Document {
public:
    void print() {
        cout<<"Printing PDF Document..."<<endl;
    }
};

class WordDocument : public Document {
public:
    void print() {
        cout<<"Printing Word Document..."<<endl;
    }
};

int main() {
    Document* doc1 = new PDFDocument();
    Document* doc2 = new WordDocument();
    doc1->print();
    doc2->print();
    delete doc1;
    delete doc2;

    return 0;
}