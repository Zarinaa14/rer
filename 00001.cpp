#include <iostream> 
#include <iomanip> 
#include <cstdlib> 
using namespace std;
 
int main () { 
    int n; 
   cout << "n? "; 
    cin >> n; 
 
    char b[sizeof(n) * 8 + 1]; 
    itoa(n, b, 2); 
   cout << std::setw(sizeof(n) * 8) << setfill('0') << b << endl; 
 
    return 0; 
}
