// protected access modifier

#include <iostream>

using namespace std;

class Base
{
protected:
    // an inheritable variable which is private
    int a;

private:
    int b;
};

// for a protected member:
/*                               public  derivation        private derivation         Protected derivation 

Private members                   not inherited            not inherited                 not inherited

Protected members                   protected                 private                     protected

Public members                      public                    private                    protected
*/
class Derive : protected Base
{

};

int main()
{
    Base b;
    Derive d;
    // cout << d.b;
    // now it can acccess will only by derive member functions

    return 0;
}