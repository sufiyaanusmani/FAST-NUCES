// Question 2
// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;

// Question 2(a)
class Cities{
    private:
        unsigned long long int peopleCount;
        long double budget;
        long double expenses;
    public:
        Cities(unsigned long long int peopleCount=0, long double budget=0.0, long double expenses=0.0){
            this->peopleCount = peopleCount;
            this->budget = budget;
            this->expenses = expenses;
        }
        unsigned long long int getpeopleCount(){
            return peopleCount;
        }
        long double getBudget(){
            return budget;
        }
        long double getExpenses(){
            return expenses;
        }
        void setPeopleCount(unsigned long long int peopleCount){
            this->peopleCount = peopleCount;
        }
        void setBudget(long double budget){
            this->budget = budget;
        }
        void setExpenses(long double expenses){
            this->expenses = expenses;
        }
        ~Cities(){
            // cout << "Destructor of cities count" << endl;
        }
};

class Provinces{
    private:
        int citiesCount;
        unsigned long long int peopleCount;
        long double budget;
        long double expenses;
    public:
        Cities citiesInProvince[4];
        Provinces(int citiesCount=0, unsigned long long int peopleCount=0, long double budget=0.0, long double expenses=0.0){
            this->citiesCount = citiesCount;
            this->peopleCount = peopleCount;
            this->budget = budget;
            this->expenses = expenses;
        }
        unsigned long long int getPeopleCount(){
            return peopleCount;
        }
        long double getBudget(){
            return budget;
        }
        long double getExpenses(){
            return expenses;
        }
        int getCitiesCount(){
            return citiesCount;
        }
        void setCitiesCount(int citiesCount){
            this->citiesCount = citiesCount;
        }
        void setPeopleCount(unsigned long long int peopleCount){
            this->peopleCount = peopleCount;
        }
        void setBudget(long double budget){
            this->budget = budget;
        }
        void setExpenses(long double expenses){
            this->expenses = expenses;
        }
        ~Provinces(){
            // cout << "Destructor of Provinces called" << endl;
        }
};

class Country{
    private:
        int provincesCount;
        unsigned long long int peopleCount;
        long double budget;
        long double expenses;
    public:
        Provinces provinceInCountry[5];
        Country(int provincesCount=0, unsigned long long int peopleCount=0, long double budget=0.0, long double expenses=0.0){
            this->provincesCount = provincesCount;
            this->peopleCount = peopleCount;
            this->budget = budget;
            this->expenses = expenses;
        }
        unsigned long long int getPeopleCount(){
            return peopleCount;
        }
        long double getBudget(){
            return budget;
        }
        long double getExpenses(){
            return expenses;
        }
        int getCitiesCount(){
            int total, i;
            total = 0;
            for(i=0;i<provincesCount;i++){
                total += provinceInCountry[i].getCitiesCount();
            }
            return total;
        }
        void setCitiesCount(int citiesCount){
            int i;
            for(i=0;i<provincesCount;i++){
                provinceInCountry[i].setCitiesCount(citiesCount);
            }
        }
        void setPeopleCount(unsigned long long int peopleCount){
            this->peopleCount = peopleCount;
        }
        void setBudget(long double budget){
            this->budget = budget;
        }
        void setExpenses(long double expenses){
            this->expenses = expenses;
        }
        void setProvincesCount(int provincesCount){
            this->provincesCount = provincesCount;
        }
        int getProvincesCount(){
            return provincesCount;
        }
        ~Country(){
            // cout << "Destructor of country called" << endl;
        }
};

void display(Country &);
void totalExpenses2(Country &);
void highestExpensesP(Country &);
void totalExpenses(Country &, int);
void finalFunction(Country &);

// Question 2(b)
int main(){
    Country Pak;		// Question 2(b)(i)
    int i, j;
    Pak.setProvincesCount(5);		// Question 2(b)(i)
    for(i=0;i<Pak.getProvincesCount();i++){
        Pak.provinceInCountry[i].setCitiesCount(4);
    }

    // setting budget for country
    int id;
    cout << "Enter your ID: K21-";		// Question 2(b)(iii)
    cin >> id;
    long double budget = (long double)id * 1000000;
    Pak.setBudget(budget);
    // dividing budget equally to all the provinces
    for(i=0;i<Pak.getProvincesCount();i++){			// Question 2(b)(iv)
        Pak.provinceInCountry[i].setBudget(budget / Pak.getProvincesCount());
    }

    // dividing budget equally to all the cities
    for(i=0;i<Pak.getProvincesCount();i++){			// Question 2(b)(v)
        for(j=0;j<Pak.provinceInCountry[i].getCitiesCount();j++){
            Pak.provinceInCountry[i].citiesInProvince[j].setBudget(Pak.provinceInCountry[i].getBudget() / Pak.provinceInCountry[i].getCitiesCount());
        }
    }
    system("cls");
    totalExpenses(Pak, id);
    totalExpenses2(Pak);
    system("cls");
    display(Pak);
    cout << "\n\nProvince with highest expenses" << endl;
    highestExpensesP(Pak);
    cout << endl << endl;
    finalFunction(Pak);
    getch();
    return 0;
}

// Question 2(b)(vi)
void display(Country &Pak){
    int i, j;
    cout << "Budget of Country: " << Pak.getBudget() << endl << endl;
    for(i=0;i<Pak.getProvincesCount();i++){
        cout << "Budget of Province " << i+1 << ": " << Pak.provinceInCountry[i].getBudget() << endl;
        cout << "Number of Cities: " << Pak.provinceInCountry[i].getCitiesCount() << endl;
        cout << "People in this Province: " << Pak.provinceInCountry[i].getPeopleCount() << endl;
        cout << "Province expenses: " << Pak.provinceInCountry[i].getExpenses() << endl;
        cout << " -------------------------------------------------------" << endl;
        cout << "|City |People Count |         Budget |         Expenses |" << endl;
        cout << " -------------------------------------------------------" << endl;
        for(j=0;j<Pak.provinceInCountry[i].getCitiesCount();j++){
            cout << "|" << setw(5) << j+1 << "|" << setw(13) << Pak.provinceInCountry[i].citiesInProvince[j].getpeopleCount() << "|" << setw(15) << Pak.provinceInCountry[i].citiesInProvince[j].getBudget() << " |" << setw(17) << Pak.provinceInCountry[i].citiesInProvince[j].getExpenses() << " |" << endl;
            cout << " -------------------------------------------------------" << endl << endl;
        }
    }
} 

// Question 2(c)
void totalExpenses(Country &Pak, int id){
    int i, j;
    unsigned long long int peopleCount, total;
    total = 0;
    // asking total count for each city
    for(i=0;i<Pak.getProvincesCount();i++){
        total = 0;
        for(j=0;j<Pak.provinceInCountry[i].getCitiesCount();j++){
            cout << "Enter people count for Province " << i+1 << ", City " << j+1 << ": ";
            cin >> peopleCount;
            total += peopleCount;
            Pak.provinceInCountry[i].citiesInProvince[j].setPeopleCount(peopleCount);
        }
        Pak.provinceInCountry[i].setPeopleCount(total);
        cout << endl;
    }


    float serviceCost;
    serviceCost = id % 100;

    // setting expenses for all the cities
    for(i=0;i<Pak.getProvincesCount();i++){
        for(j=0;j<Pak.provinceInCountry[i].getCitiesCount();j++){
            Pak.provinceInCountry[i].citiesInProvince[j].setExpenses(Pak.provinceInCountry[i].citiesInProvince[j].getpeopleCount() * serviceCost);
        }
    }
}

// Question 2(d)
void totalExpenses2(Country &Pak){
    int i, j;
    long double countryTotal, provinceTotal;
    countryTotal = provinceTotal = 0;
    for(i=0;i<Pak.getProvincesCount();i++){
        provinceTotal = 0;
        for(j=0;j<Pak.provinceInCountry[i].getCitiesCount();j++){
            countryTotal += Pak.provinceInCountry[i].citiesInProvince[j].getExpenses();
            provinceTotal += Pak.provinceInCountry[i].citiesInProvince[j].getExpenses();
        }
        Pak.provinceInCountry[i].setExpenses(provinceTotal);
    }
    Pak.setExpenses(countryTotal);
}


// Question 2(e)
void highestExpensesP(Country &Pak){
    unsigned long long int max;
    int i, j, maxIndex;
    maxIndex = 0;
    max = Pak.provinceInCountry[0].getExpenses();
    for(i=0;i<Pak.getProvincesCount();i++){
        if(Pak.provinceInCountry[i].getExpenses() > max){
            max = Pak.provinceInCountry[i].getExpenses();
            maxIndex = i;
        }
    }
    // printing details of province with highest expenses
    cout << "Province Number: " << maxIndex + 1 << endl;
    cout << "Budget of Province: " << Pak.provinceInCountry[maxIndex].getBudget() << endl;
    cout << "Number of Cities: " << Pak.provinceInCountry[maxIndex].getCitiesCount() << endl;
    cout << "People in this Province: " << Pak.provinceInCountry[maxIndex].getPeopleCount() << endl;
    cout << "Province expenses: " << Pak.provinceInCountry[maxIndex].getExpenses() << endl;
}


// Question 2(f)
void finalFunction(Country &Pak){
    long double net[5];
    int i;
    for(i=0;i<Pak.getProvincesCount();i++){
        net[i] = Pak.provinceInCountry[i].getBudget() - Pak.provinceInCountry[i].getExpenses();
    }

    cout << "Province        Profit/Loss     Type" << endl;
    cout << "------------------------------------" << endl;
    for(i=0;i<Pak.getProvincesCount();i++){
        cout << i+1 << "              " << setw(12) << abs(net[i]) << "     " << (net[i]>0?"Profit":"Loss") << endl;
    }
}