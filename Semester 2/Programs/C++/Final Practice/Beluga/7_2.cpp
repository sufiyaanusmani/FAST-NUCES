#include <iostream>
#include <cmath>
using namespace std;

class Polar{
    private:
        float radius;
        float angle;
    public:
        Polar(){

        }
        Polar(float radius, float angle){
            this->radius = radius;
            this->angle = angle;
        }
        Polar operator+(const Polar &p){
            float x1, y1, x2, y2, x, y;
            Polar temp;
            x1 = radius * cos(angle);
            y1 = radius * sin(angle);
            x2 = p.radius * cos(p.angle);
            y2 = p.radius * sin(p.angle);
            x = x1 + y1;
            y = x2 + y2;
            temp.angle = atan(y/x);
            temp.radius = sqrt(x*x + y*y);
            return temp;
        }
        friend ostream & operator<<(ostream &, const Polar &);
};

int main(){
    Polar p1(2, 0.5), p2(3, 0.9);
    cout << p1 + p2 << endl;
    return 0;
}

ostream & operator<<(ostream &os, const Polar &p){
    os << "Radius = " << p.radius << ", Angle = " << p.angle;
    return os;
}