#include<iostream.h>
int Line_search (int *mass,int n,int x)
{int index=-1;
for(int i=0;i<n;i++)
    {if (mass[i]==x)
    index=i+1;
    
    }
    return index;
    }
int main(){
    int x;
    int *massA=new int(10);
    srand(time(NULL));
    for(int i=0;i<10;i++)
    {
      massA[i]=rand()%100;
      cout<<massA[i]<<endl;      
            }
            cout<<"x=";
            cin>>x;
            cout<<Line_search(massA,10,x)<<endl;
    system("pause");
    return 0;
    }
