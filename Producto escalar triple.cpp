#include <iostream>

using namespace std;
int main()
{
double v1[2];
double v2[2];
double v3[2];
int i;
double vectorI;
double vectorJ;
double vectorK;
double prodEsT;
double prodEsA;
double prodEsB;
double prodEsC;
double prodCruzBxC;

for(i=0; i<3; i++){
   cout<<"Ingresa los valores x"<< i+1 <<" del primer vector: "<<endl;
    cin>>v1[i];
    
    cout<<"Ingresa los valores y"<<i+1 <<" del segundo vector: "<<endl;
    cin>>v2[i];
    
    cout<<"Ingresa los valores z"<< i+1 <<" del primer vector: "<<endl;
    cin>>v3[i];
}

 vectorI = ((v2[1] * v3[2]) - (v3[1] * v2[2]));
 vectorJ = ((v1[1] * v3[2]) - (v3[1] * v1[2]));
 vectorK = ((v1[1] * v2[2]) - (v2[1] * v1[2]));
 cout<<"El VectorI es: "<<vectorI<<endl<<"El VectorJ es: "<<vectorJ<<endl<<"El VectorK es: "<<vectorK<<endl;

prodEsA = ((v2[1] * v3[2]) - (v3[1] * v2[2])) * v1[0];
prodEsB = ((v1[1] * v3[2]) - (v3[1] * v1[2])) * v2[0];
prodEsC = ((v1[1] * v2[2]) - (v2[1] * v1[2])) * v3[0];

prodEsT = prodEsA - prodEsB + prodEsC;
cout << "\n\n";

prodCruzBxC = vectorI - vectorJ + vectorK;

cout << "El producto cruz BxC es: " << prodCruzBxC << "\n";

cout << "El producto escalar es: " << prodEsA << "\n";
cout << "El producto escalar es: " << prodEsB << "\n";
cout << "El producto escalar es: " << prodEsC << "\n";
cout << "El producto escalar triple es: " << prodEsT;

return 0;

}