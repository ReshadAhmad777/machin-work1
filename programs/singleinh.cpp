
#include <iostream>
using namespace std;
class parent {
    protected :
          int width;
    public :
          void getw(int w)
    {
        cout<<" enter width of rectangle "<<endl;
        width=w;
    }
    
};
class child:public parent{
protected:
    int heigth;
public:
    void geth(int h){
        cout<<"enter heigth of rectangle"<<endl;
        heigth=h;
    }
    void display(){
        cout<<"area of rectangle is :"<<width*heigth<<endl;
    }
};

int main() {
    
    child ob;
    ob.getw(12);
    ob.geth(10);
    ob.display();
   
    return 0;
}
