#include <iostream>
using namespace std;
#include <string>
#include <cstdlib> 
#include <ctime>  

class Password{
    private:
    int longitud;
    string contrasena;

    public:
    Password();
    Password(int, string);

    void setlongitud(int);
    void setcontrasena(string);
    int getlongitud();
    string getcontrasena();

    void generarpassword();
    bool esFuerte();
    void vercontrasena();
    void cargarlong(int n);

};
