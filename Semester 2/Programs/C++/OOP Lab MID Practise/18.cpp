// Write a class called CoffeeShop, which has two data members and seven member functions:
// Constant public Name: a string (basically, of the shop)
// Public Menu: an array of items.
// addOrder: adds the name of the item to the end of the orders array if it exists on the menu. Otherwise, return "This item is currently unavailable!"
// fulfillOrder: if the orders array is not empty, return "The {item} is ready!". If the orders array is empty, return "All orders have been fulfilled!"
// listOrders: returns the list of orders taken, otherwise, an empty array.
// dueAmount: returns the total amount due for the orders taken.
// cheapestItem: returns the name of the cheapest item on the menu.
// drinksOnly: returns only the item names of type drink from the menu.
// foodOnly: returns only the item names of type food from the menu.
#include <iostream>
using namespace std;

class CoffeeShop{
    public:
        const string name;
        string items;
};

int main(){
    
    return 0;
}