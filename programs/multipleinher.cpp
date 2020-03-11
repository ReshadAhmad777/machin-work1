
#include <iostream>
using namespace std;
class parent1{
public:
    int a;
    void geta(int n1){
        cout<<"enter fisrt num"<<endl;
        n1=a;
    }
};
class parent2{
public:
    int b;
    void getb(int n2){
        cout<<"enter second num"<<endl;
        n2=b;
    }
};

class child: public parent1, public parent2{
public:
    void display(){
        cout<<"average of nums is :"<<a*b/2<<endl;
    }
};

int main() {
    child obj;
    obj.geta(100);
    obj.getb(20);
    obj.display();
   
    return 0;
}
