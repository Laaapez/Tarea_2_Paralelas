#include "funciones.h"

int desarrollo_matriz()
{
  ifstream file("Matrices.txt");
  string copia, temp, copia_2;
  int found, i = 0, j = 0;
  int arreglo[18];
  int solucion[9];
  while (getline(file, copia))
  {

    if (!copia.empty())
    {
      copia.erase(remove(copia.begin(), copia.end(), '['), copia.end());
      copia.erase(remove(copia.begin(), copia.end(), ']'), copia.end());

      replace(copia.begin(), copia.end(), ';', ' ');
      replace(copia.begin(), copia.end(), ',', ' ');
      replace(copia.begin(), copia.end(), ':', ' ');
    }
    stringstream ss(copia);

    while (!ss.eof())
    { 
      ss >> temp;
      if (stringstream(temp) >> found)

        arreglo[i] = found;

      temp = "";
      i = i + 1;
    }
    solucion[0] = arreglo[0] * arreglo[9];
    solucion[1] = arreglo[1] * arreglo[10];
    solucion[2] = arreglo[2] * arreglo[11];
    solucion[3] = arreglo[3] * arreglo[12];
    solucion[4] = arreglo[4] * arreglo[13];
    solucion[5] = arreglo[5] * arreglo[14];
    solucion[6] = arreglo[6] * arreglo[15];
    solucion[7] = arreglo[7] * arreglo[16];
    solucion[8] = arreglo[8] * arreglo[17];
    for (j = 0; j < 9; j++)
    {
      cout << solucion[j] << " ";
    
      if(j == 2)
      {
        cout<<endl;
      }
      if(j == 5)
      {
        cout<<endl;
      }
    
    }
    i = 0;
    cout << endl;
    cout<<"------------"<<endl;
    cout<<"Se borrara la linea."<<endl;
    
    copia.erase(remove(copia.begin(), copia.end(), '1'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '2'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '3'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '4'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '5'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '6'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '7'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '8'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '9'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '0'), copia.end());
    copia.erase(remove(copia.begin(), copia.end(), '-'), copia.end());
  }
  return 0;
}
