#include<iostream>
using namespace std;
    class point{
        private:
            int x,y;

            public:
            //list initialisation
                point() : x{0},y{0} { //default constructor
                    cout<<"default constructor"<<endl;
                }
                point(int p,int q) : x{p},y{q} { //parameterized constructor
                    cout<<"parameterized constructor"<<endl;
                }
                    point add(point p) {
                    point r;
                    r.x = x + p.x;
                    r.y = y + p.y;
                    return r;
                }
                void show(){
                    cout<<"point: ("<<x<<", "<<y<<")"<<endl;
                }
    };
    int main(){
        point p(5,10) ,q(20,50);
        p.show();
        q.show();
        point r=p.add(q);
        r.show();
        return 0;
    }