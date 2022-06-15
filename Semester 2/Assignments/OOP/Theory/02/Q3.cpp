// Name: Sufiyaan Usmani
// Roll No: 21K-3195
// Section: BCS-2J

#include <iostream>
using namespace std;

class Cloths{
    private:
        string tagID;
        static float revenue;
    public:
        Cloths(){
            tagID = "000";
        }
        void setTagID(string tagID){
            this->tagID = tagID;
        }
        static void addRevenue(float amount){
            revenue = revenue + amount;
        }
        static int getRevenue(){
            return revenue;
        }
        friend double calculateTax();
};
float Cloths::revenue = 0.0;

class Shirt;    // formal declaration of class Shirt to allow overloading of < operator
class Pant: virtual public Cloths{
    private:
        string style;
        float price;
        static float taxRate;
        static int pantStock;
    public:
        Pant(string style){
            if(style == "bell-bottomed" || style == "straight fit" || style == "narrow fit"){
                setTagID("P-123");  // tag ID will not be set by user as it is specialized ID for each clothing type, not for each object (specified in question)
                this->style = style;
                pantStock--;
                if(style == "bell-bottomed"){
                    this->price = 1199;
                }else if(style == "straight fit"){
                    this->price = 1599;
                }else if(style == "narrow fit"){
                    this->price = 1999;
                }
                Cloths::addRevenue(price);
            }else{
                cout << "Invalid style" << endl;
                this->price = 0.0;
            }
        }
        Pant(const Pant &p){
            style = p.style;
            price = p.price;
            pantStock--;
        }
        float getPrice(){
            return price;
        }
        float bill(){
            float amount;
            amount = ((100 + taxRate) / 100.0) * price;
            return amount; 
        }
        static int getStock(){
            return pantStock;
        }
        friend bool operator<(const Shirt &, const Pant &);
};
int Pant::pantStock = 50;
float Pant::taxRate = 4.5;

class Shirt: virtual public Cloths{
    private:
        string design;
        float price;
        static float taxRate;
        static int shirtStock;
    public:
        Shirt(string design){
            if(design == "formal" || design == "traditional" || design == "casual"){
                setTagID("P-456");
                this->design = design;
                this->price = 1499;
                shirtStock--;
                Cloths::addRevenue(price);
            }else{
                cout << "Invalid design entered";
                this->price = 0.0;
            }
        }
        float bill(){
            float amount;
            amount = ((100 + taxRate) / 100.0) * price;
            return amount;
        }
        float bill(const Shirt &s, string discountCode){
            float amount;
            if(discountCode == "SHIRT23"){
                amount = s.price * 0.77;
                cout << "Discount Applied" << endl;
            }else{
                amount = s.price;
                cout << "Invalid Dicount Code" << endl;
            }
            amount = ((100 + taxRate) / 100.0) * amount;
            return amount;
        }
        static int getStock(){
            return shirtStock;
        }
        float getPrice(){
            return price;
        }
        friend bool operator<(const Shirt &, const Pant &);
};
float Shirt::taxRate = 7.5;
int Shirt::shirtStock = 50; // this will contain initial number of shirts in the shop. Whenever an object is created, its value will decrement by 1

class Tie: virtual public Cloths{
    private:
        string pattern;
        float price;
        static int tieStock;
    public:
        Tie(string pattern){
            if(pattern == "stripes" || pattern == "checks"){
                setTagID("T-789");
                this->pattern = pattern;
                if(pattern == "stripes"){
                    this->price = 699;
                }else{
                    this->price = 799;
                }
                tieStock--;
                Cloths::addRevenue(price);
            }else{
                cout << "Invalid pattern entered" << endl;
                this->price = 0.0;
            }
        }
        float getPrice(){
            return price;
        }
        float bill(){
            return price;
        }
        static int getStock(){
            return tieStock;
        }
};
int Tie::tieStock = 50;

class Suit: public Shirt, public Pant, public Tie{
    private:
        float price;
    public:
        Suit(string design, string style, string pattern):Cloths(), Shirt(design), Pant(style), Tie(pattern){
            setTagID("SS-111");
            price = Shirt::getPrice() + Pant::getPrice() + Tie::getPrice();      
        }
        float bill(){
            double amount;
            amount = Shirt::bill() + Pant::bill() + Tie::bill();
            return amount; 
        }
};

bool operator<(const Shirt &s, const Pant &p){
    if(s.price < p.price){
        cout << "Pant gives more profit" << endl;
        return true;
    }else{
        cout << "Shirt gives more profit" << endl;
        return false;
    }
}

double calculateTax(){
    Cloths cloth;
    double taxAmount;
    taxAmount = cloth.revenue * 0.12;   // accessing revenue using Cloths object as revenue is static member so it will be same for all objects of type Cloths
    return taxAmount;
}

int main(){
    Suit suit("formal", "narrow fit", "stripes");
    cout << "Bill for suit: Rs. " << suit.bill() << endl << endl;

    Shirt shirt1("casual");
    cout << "Bill for shirt: Rs. " << shirt1.bill() << endl << endl;

    Pant pant("straight fit");
    cout << "Bill for pant: Rs. " << pant.bill() << endl;

    Shirt shirt2("traditional");
    float a = shirt2.bill(shirt2, "SHIRT23");   // question says that object of shirt will be passed as argument
    cout << "Bill for shirt after applying discount: Rs. " << a << endl << endl;

    cout << "Checking whether shirt or pant gives more profit: ";
    shirt1 < pant;

    cout << endl << "Current Revenue: Rs. " << Cloths::getRevenue() << endl;
    cout << "Tax Rate: 12 %" << endl;
    cout << "Tax: Rs. " << calculateTax() << endl;
    cout << "Shirts remaining in stock: " << Shirt::getStock() << endl;
    cout << "Pants remaining in stock:: " << Pant::getStock() << endl;
    cout << "Ties remaining in stock  : " << Tie::getStock() << endl;
    return 0;
}