#include <iostream>
using namespace std;

class TaxationDepartment;
class Bank{
	friend class TaxationDepartment;
	private:
		string name;
		char category;
		double revenue;
	public:
		Bank(){
			
		}
		Bank(string name, char category, double revenue){
			this->name = name;
			setCategory(category);
			this->revenue = revenue;
		}
		void setCategory(char category){
			if(category == 'A' || category == 'B' || category == 'C'){
				this->category = category;
			}else{
				this->category = 'C';
			}
		}
		void display(){
			cout << "Name: " << name << endl;
			cout << "Category: " << category << endl;
			cout << "Revenue: " << revenue << endl;
		}
};

class TaxationDepartment{
	public:
		double calculateTax(const Bank &b){
			double tax;
			if(b.category == 'A'){
				tax = b.revenue * 0.2;
			}else if(b.category == 'B'){
				tax = b.revenue * 0.15;
			}else if(b.category == 'C'){
				tax = b.revenue * 0.10;
			}
			return tax;
		}
};

int main(){
	Bank bank("ABC", 'A', 200000);
	TaxationDepartment t;
	double tax;
	tax = t.calculateTax(bank);
	cout << "Tax: Rs. " << tax << endl;
	return 0;
}
