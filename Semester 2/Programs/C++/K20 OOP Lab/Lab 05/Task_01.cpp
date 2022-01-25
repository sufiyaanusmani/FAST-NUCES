#include <iostream>
using namespace std;

class Pair{
    public:
        int a, b;

        int add();
};

int main(){
    Pair p;
    cin >> p.a >> p.b;
    cout << "Sum: " << p.add() << endl;
    return 0;
}

int Pair::add(){
    return(a+b);
}