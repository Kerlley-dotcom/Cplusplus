#include <iostream>
using namespace std;

int main() {
    string title = "Mr. ";
    string name("Kerlley");
    string end(10, '!');

    cout << name.size() << endl;
    cout << name.back() << endl;
    cout << name[2] << endl;

    cout << end << endl;

    //strimg concatenation 
    cout << title + name << endl;
    cout << title << endl;
   

    name += " Doe"; // name = name + " Doe";
    name.append(end);
    cout << name << endl;

    cout <<title.append(name) << endl;

    return 0;

}