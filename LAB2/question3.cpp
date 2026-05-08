#include <iostream>
using namespace std;

class Demo
{
private:
    void privateFunction() // private member function
    {
        cout << "Private function is called!" << endl;
    }

public:
    void publicFunction() // public member function
    {
        cout << "Public function is called!" << endl;

        // Calling private function inside public function
        privateFunction();
    }
};

int main()
{
    Demo obj;

    obj.publicFunction(); // Allowed
    // obj.privateFunction(); // Not allowed! Uncommenting this will cause an error

    return 0;
}
