

#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;


bool Input(int& a, int& b) 
{
    cout << "Enter a and b" << endl;;
    
    try {
        string a1, b1;
        cin >> a1 >> b1;
        int i_a1 = stoi(a1);
        int i_b1 = stoi(b1);
        a = i_a1;
        b = i_b1;
        return true;
    }
    catch (std::invalid_argument e) {
        
        return false;
    }
    
}




int main()
{
    int a, b;
    if (Input(a, b) == false) 
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << s;
    return 0;



}
