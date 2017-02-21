#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
 
int main ()
{
srand(time(NULL));
const short int size = 25;
int a[size];
 
cout<< "\n" << "First array: " <<endl;
for (int i=0; i<size; ++i)
{
a[i] = rand()%50;
cout<< a[i] << "\t";
}
 
int key;
cout<< "\n" << "Enterkey --> ";
cin>>key;
 
bool temp = false;
for (int i=0; i<size; ++i)
{
if (key == a[i]){
cout<< "Resultis - " << i+1 <<endl;
temp = true;
break;
}
}
 
if (!temp)
cout<< "Notfound :( " <<endl;
 
 
getch();
return 0;
}
