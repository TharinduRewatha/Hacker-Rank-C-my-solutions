#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//Tharindu Rewatha
class Person
    {
    public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    protected:
    string name;
    int age, sum=0;
   };
class Professor : public Person
    {
    public:
    Professor():
        id {current_id++}
    { }
    void getdata()
        {
        cin>>name>>age>>pub;
        }
    void putdata()
        {
        cout<<name<<" "<<age<<" "<<pub<<" "<<id<<endl;
        }
    private:
    int pub;
    int id;
    static int current_id;
   };
class Student : public Person
    {
    public:
    Student():
        marks(6),
        id {current_id++}
    { }
    void getdata()
        {
        int i;
        cin>>name>>age;
        for (auto& mark : marks)
        {
            cin >> mark;
            sum+=mark;
        }
        }
    void putdata()
        {
        int i;
        cout<<name<<" "<<age<<" "<<sum<<" "<<id<<endl;
        }
    private:
    vector<int> marks;
    int id;
    static int current_id;
};
int Professor::current_id {1};

int Student::current_id {1};
//seekthefreak
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
//Seekthefreak
