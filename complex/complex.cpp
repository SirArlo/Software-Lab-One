#include <iostream>
#include <complex>

using namespace std;

using Comp = complex<double>;  

int main() {
    
    Comp a = 0.0;
    Comp b = 0.0;
    Comp c = 0.0;
    char Continue;
    
  while(Continue != 'q'){
      
      cout << "Please enter a :" << endl;
      cin >> a;
      cout << "Please enter b :" << endl;
      cin>> b;
      cout << "Please enter c :" << endl;
      cin >> c;


Comp Root = sqrt(pow(b,2) -4.0*a*c);

Comp answer1 = (-b + Root)/(2.0*a);

Comp answer2 = (-b - Root)/(2.0*a);

cout << "The roots are: " << answer1.real() << " + " <<answer1.imag() << "j" << endl<< answer2.real() << " + " <<answer2.imag() << "j" << endl;
    
    
    cout<< "Would you like to perform another calculation?"<< endl;
    cout << "Enter y to continue or enter q to quit" << endl;
    
    cin >> Continue;
    
    
    }

    return 0;
}

