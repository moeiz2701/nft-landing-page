#include <iostream>
using namespace std;
class shape
{
    public:
    void draw()
    {
        cout << "nigga" ;
    }
};
class rectangle : public shape{
    public :
    void draw()
    {
        cout << "yo i am traingle";
    }
};
int main()
{
    shape *s;
    s= new rectangle;
    s->draw();
}