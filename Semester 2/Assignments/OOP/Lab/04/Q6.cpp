#include <iostream>
using namespace std;

class Person{
    private:
        string name;
        int height;
        int age;
        string interests[3];
        int counter;
    public:
        Person();
        Person(string, int, int, string [3]);
        void display();
        ~Person();
};

class Address{
    private:
        int houseNo;
        char block;
        int sector;
        string city;
        string country;
    public:
        Address();
        Address(string *);
        void display();    
};

class Lab{
    private:
        int labNumber;
        int noOfTasks;
        string topic;
        float attendance;
    public:
        Lab();
        Lab(int, int, string, float);
        void display();
        ~Lab();
};


int main(){
    string interest[3] = {"AI", "ML", "CS"};
    Person p1("Sufiyaan Usmani", 23, 18, interest);
    p1.display();
    return 0;
}

Person::Person(string name, int height, int age, string interests[3]){
    this->name = name;
    this->height = height;
    this->age = age;
    cout << "Enter your interests: ";
    for(int i=0;i<3;i++){
        this->interests[i] = interests[i];
    }
    string l = "HOUSE NO 123, Block A, Sector 17, Karachi, Pakistan";
    Address address(&l);
    Lab lab;
    address.display();
    lab.display();
}
    

void Person::display(){
    cout << "Name: " << name << endl;
    cout << "Height: " << height << endl;
    cout << "Age: " << age << endl;
    cout << "Interests: " << endl;
    for(int i=0;i<3;i++){
        cout << this->interests[i] << endl;
    }
    
}

Person::~Person(){
    cout << "Destructor" << endl;
}

Address::Address(){

}

Address::Address(string *address){
    this->houseNo = 0;
    this->houseNo = (((*address).at(9)-'0') * 100) + (((*address).at(10)-'0') * 10) + (((*address).at(11)-'0'));
    this->block = (*address).at(20);
    this->sector = (((*address).at(30)-'0') * 10) + (((*address).at(31)-'0'));
    this->city = (*address).at(34);
    int i;
    for(i=35;i<41;i++){
        this->city += (*address).at(i);
    }
    for(i=43;i<51;i++){
        this->country += (*address).at(i);
    }
}

void Address::display(){
    cout << "House No: " << houseNo << endl;
    cout << "Block: " << block << endl;
    cout << "Sector: " << sector << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
}

Lab::Lab(){
    labNumber = 1;
    noOfTasks = 1;
    topic = "OOP";
    attendance = 100.0;
}

Lab::Lab(int labNumber, int noOfTasks, string topic, float attendance){
    this->labNumber = labNumber;
    this->noOfTasks = noOfTasks;
    this->topic = topic;
    this->attendance = attendance;
}

void Lab::display(){
    cout << "Lab Number: " << labNumber << endl;
    cout << "No of tasks: " << noOfTasks << endl;
    cout << "Topic: " << topic << endl;
    cout << "Attendance Percentage: " << attendance << " %" << endl;
}

Lab::~Lab(){
    cout << "Destructor Called" << endl;
}