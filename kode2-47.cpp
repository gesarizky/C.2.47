/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/
/*DI Tingkatkan kembali oleh
/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str[] = "C,C++,Java,Python,Ruby";
  char *pch;
  
  cout<<"Bahasa pemrograman: "<<endl;
  pch = strtok(str, ","); // pembatas berupa koma
  while (pch != NULL) {
    cout<<pch<<endl;
    pch = strtok(NULL, ",");
  }

  return 0;
}
