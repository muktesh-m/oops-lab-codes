/*Create a class which stores x and y coordinates of a point. Calculate distance between
two given points and display it.*/
#include <iostream>
#include <math.h>
using namespace std;
class point
{
    private:
    int x1,x2;
    int y1,y2;
    float dist=0.0;
    public:
    void accept()
    {
        cout<<"Enter the first point (x,y): "<<endl;
        cin>>x1>>y1;
        cout<<"Enter the second point (x,y) :"<<endl;
        cin>>x2>>y2;
    }
    void calc()
    {
        float cal;
        cal=(double)(pow((x2-x1),2)+pow((y2-y1),2));
        dist=sqrt(cal);
    }
    void display()
    {
        cout<<"The distance between points ("<<x1<<","<<y1<<") & ("<<x2<<","<<y2<<") is :"<<dist;
    }
};
int main()
{
    point p;
    p.accept();
    p.calc();
    p.display();
    return 0;
}