//--- El programa trabaja con una matriz estática

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int mat[4][7];

  /*----
  srand(time(nullptr));
  for (int f = 0; f < 4; f++)
    for (int c = 0; c < 7; c++)
      mat[f][c] = rand() % 100;
  //--- imprimir la matriz
   */

  //--- leen datos a la matris desde el teclado
  for (int f = 0; f < 4; f++)
    for (int c = 0; c < 7; c++)
    {
      cout << "mat[" << f << "][" << c <<"]= ";
      cin >> mat[f][c];
    }

 //--- se imprimen los datos de la matriz

  for (int f = 0; f < 4; f++)
  {
    for(int c=0; c<7; c++)
      cout << setw(5) << mat[f][c];
    cout << "\n";
  }

  return 0;
}
