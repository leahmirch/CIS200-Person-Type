#include <iostream>
using namespace std;

class personType {

public:
    void print()  {
        cout << firstName << " " << lastName;
}
    void setName(string first, string last) {
        firstName = first;
        lastName = last;
}
    string getFirstName() const {
        return firstName;
}
    string getLastName() const {
        return lastName;
}

    personType(string first = "", string last = "") {
        firstName = first;
        lastName = last;
}

private:
    string firstName;
    string lastName;


};

int main() {

    personType Name;
    string FirstName;
    string LastName;
    
    cout << "Enter first name: ";
    cin >> FirstName;
    
    cout << "Enter last name: ";
    cin >> LastName;
    
    
    Name.setName(FirstName, LastName);
    
    cout << "Get function: " << Name.getFirstName() << " " << Name.getLastName() << endl;
    
    cout << "Print function: ";
    Name.print();
    
    cout << endl;
    
    
    
return 0;
}
