#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



class Person {
protected:
    string name;
    int age;
    Person(){}

public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor : public Person {
private:
    string publications;
    static int count;
    int cur_id;

public:
    Professor(){
        cur_id = ++count;
    }
    void putdata(){
        cout<<name<<" ";;
        cout<<age<<" ";;
        cout<<publications<<" ";;
        cout<<cur_id<<"\n";;
    }

    void getdata(){
        cin>>name;
        cin>>age;
        cin>>publications;
    }
};
int Professor::count = 0;

class Student : public Person {
public:
    int marks[6];
    static int count;
    int cur_id;

    Student(){
        cur_id = ++count;
    }

    void putdata(){
        cout<<name<<" ";
        cout<<age<<" ";
        int sum = 0;
        for(int i = 0; i < 6; i++){
            sum += marks[i];
        }
        cout<<sum<<" ";
        cout<<cur_id<<"\n";
    }

    void getdata(){
        cin>>name;
        cin>>age;
        for (int i = 0; i < 6; i++){
            cin>>marks[i];
        }
    }
};
int Student::count = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}