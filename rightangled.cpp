#include<iostream>
using namespace std;
int main()
{
   int i,j,rows;
   cout<<"Enter Right Traingle Star Pattern Row=";
   cin>>rows;
   cout<<"Right Angled Traingle Star Pattern\n";
   for(i=1; i<=rows; i++){
     for(j=1; j<=rows; j++){
        cout<<"*";
     }
     cout<<"\n";
   }
   return 0;
 }

