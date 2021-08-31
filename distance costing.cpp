#include <iostream>
#include <string>
#include <stdio.h>

using  namespace std;

int main() {
    int Distance;
    
    double Payment = 0;
    string Response = "You'll have to pay ";

    cout << "What is the distance? ";
    cin >> Distance;

    if (Distance >= 0 && Distance <= 100) {
        Payment = 5.00;
    }
    else if (Distance > 100 && Distance <= 500) {
        Payment = 8.00;
    }
    else if (Distance > 500 && Distance < 1000) {
        Payment = 10.00;
    }
    else if (Distance >= 1000) {
        Payment = 12.00;
    }
    
	
	cout << Response << Payment;
}
