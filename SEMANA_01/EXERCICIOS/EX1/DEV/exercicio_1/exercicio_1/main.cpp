#include <iostream>
using namespace std;
int main() {
  int valor = 0;
  double percentual = 0;
  cout << " digite um numero" <<endl;
  cin >> valor; 
  cout << "digite a porcentagem" <<endl;
  cin >> percentual;
  percentual = percentual / 100; 
  double max = valor * (1 + percentual);
  double min = valor * (1 - percentual); 
  cout << max << endl;
  cout << min << endl;
}

