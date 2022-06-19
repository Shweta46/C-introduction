#include <iostream>
#include <string>    //just string no "h" attached to it
using namespace std; // wont have to write the namespace repeatedly

int add(int a, int b)
{
    return a + b;
}

// ---------CLASSES AND OBJECTS:
class Employee
{
public:
    string name;
    int salary;

    // the thing mentioned below is constructor
    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
    void printdetails()
    {
        cout << "The name of our first employee is " << this->name << " and their salary is " << this->salary << "$" << endl; // this is replaced by the object we are calling the function for
    }

    void getSecretPassword()
    {
        cout << "The secret password of employee is " << this->secretPassword << endl;
    }

private:
    int secretPassword;
};

// something called INHERITENCE------------------
class Programmer : public Employee
{
public:
    int errors;
};

int main()
{
    // cout << "hello world";         // prints whatever is inside it whenver c is for console and the output appears in the console
    // cout << "hello world" << endl; // brings the pointer to the next line after the string finishes
    // cout << "Next line" << endl;

    // DATA TYPES:

    // int a, b, c;
    // short sa = 9;
    // cout << sa << endl;

    // // camelcase Notation
    // int MarksInMaths = 83;
    // cout << MarksInMaths << endl;
    // cout << "The marks of student in maths is " << MarksInMaths << endl;
    // short d;
    // int const e = 89; // cant change the constant value afterwards
    // long f;
    // long long g;
    // double h = 45.433;
    // long double i = 45.999;
    // float score = 45.32;
    // score = 34.2; // reassigning value to variable
    // cout << "The score is " << score << endl;

    // taking input from user
    //  cout<<"Enter the first number"<<endl;
    //  cin>>a;

    // cout<<"Enter the second number"<<endl;
    // cin>>b;
    // cout<<"a + b "<<a + b<<endl;
    // cout<<"a - b "<<a - b<<endl;
    // cout<<"a * b "<<a * b<<endl;
    // cout<<"a / b "<<(float)a / b<<endl; //changing the data type of the division

    // ------------if else conditions
    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;

    // the series of checking the condition is from top to bottom, if the first condition is true then it just goes inside and prints whatever the condition tells it to
    //  if (age < 10)
    //  {
    //      cout<<"You can vote"<<endl;
    //  }

    // else if(age > 18 and age <= 110)
    // {
    //     cout<<"You can vote"<<endl;
    // }

    // else if(age > 110)
    // {
    //     cout<<"Enter a valid age."<<endl;
    // }

    // ----------switch conditions
    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years old" << endl;
    //     break; //if its not present then the switch case prints all the outputs after this case is met with right condition
    // case 18:
    //     cout << "You are 18 years old" << endl;
    // default:
    //     cout << "You are neither 12 or 18 years old" << endl;
    //     break;
    // }

    //----------------LOOPS
    // int index = 0;
    // while (index<34)
    // {
    //     cout<<"We are at index number "<<index<<endl;
    //     index = index + 1;
    // }

    // do // runs for atleast one time even thought the condition was false
    // {
    //     cout << "We are at index number " << index << endl;
    //     index = index + 1;
    // } while (index > 3550);

    // for (int i = 0; i < 34; i++)
    // {
    //     cout << "Value of i is " << i << endl;
    // }

    // ---------FUNCTIONS
    // cout << "Enter the first number" << endl;
    // cin >> a;

    // cout << "Enter the second number" << endl;
    // cin >> b;
    // cout<<"The function returned "<<add(a,b)<<endl;

    // ---------------ARRAYS
    // int arr[34] = {1,3,6};
    // cout<<arr[1]<<endl;
    // int marks[6];

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Enter the marks of "<<i<<"th student"<<endl;

    //     cin>>marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl; //prints the marks that we input in the previous code line

    // }

    // ---------------2D ARRAYS
    // int arr2D[2][3] = {
    //                     {1,2,3},
    //                     {4,5,6}
    //                   };
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"The value at ["<<i<<j<<"] is "<<arr2D[i][j]<<endl;
    //     }

    // }

    // -------------------TYPECASTING
    // int l = 342;
    // cout<<(float)l/34<<endl;
    // float m = 84.79;
    // cout<<(int)m<<endl;

    // -------------------STRINGS DATATYPE

    // string name = "harry and hermione";
    // cout<<"The name is "<<name<<endl;
    // cout<<"The length of name is "<<name.length()<<endl;
    // cout<<"Some part of name is "<<name.substr(0,3)<<endl; //prints the string from index something to something
    // cout<<"Some part of name is "<<name.substr(2,5)<<endl;
    // cout<<"The name is "<<name<<endl;

    // ----------------POINTERS:

    // int a = 34;
    // int *ptra;
    // ptra = &a;
    // cout<<"The value of a is "<<a<<endl; //gives the address of a
    // cout<<"The address of a is "<<&a<<endl; //gives the address of a
    // cout<<"The address of a is "<<ptra<<endl; //gives the address of a
    // cout<<"The value of a is "<<*ptra<<endl; //gives value whichever the ptra is pointing towards

    // ------------CLASSES AND OBJECTS:

    // Employee har; // first fix your employees and then the attributes about them, here har would be an object
    // har.name = "harry";
    // har.salary = 100;
    // cout<<"The name of our first employee is "<<har.name<<" and their salary is "<<har.salary<<"$"<<endl;

    // the thing printed above can also be achieved by the following function
    //  har.printdetails();

    // now for the constructor
    // Employee har("harry", 129000);

    // including something from "Private" in the argument as well
    //  har.printdetails();

    Employee har("harry", 129000, 14267926);
    // cout<<har.secretPassword; //shows error as its a private variable so it cant be accessed

    // but can be accessed by a function inside the class itself but not direct objects
    har.getSecretPassword();
    return 0;
}