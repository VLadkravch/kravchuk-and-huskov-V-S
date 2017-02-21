#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#define N 10000
using namespace std;
void selectSort(int arr[], int n)
{
	int pos_min,temp;
	for (int i=0; i < n-1; i++)
	{
	    pos_min = i;
		
		for (int j=i+1; j < n; j++)
		{

		if (arr[j] < arr[pos_min])
                   pos_min=j;
		}
            if (pos_min != i)
            {
                 temp = arr[i];
                 arr[i] = arr[pos_min];
                 arr[pos_min] = temp;
            }
	}
}
int main(){
    int mass[N];
    srand(time(NULL));
    for (int i = 0; i<N; i++){
    mass[i]=rand();
}
    for(int i = 0; i<N; i++){ 
    cout<<mass[i]<<" ";
}
cout<<"\n\nSORT!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n";
cout<<endl;
clock_t begin;
clock_t end;
begin=clock();
selectSort(mass,N);
end=clock();
 for(int i = 0; i<N; i++){
    cout<<mass[i]<<" ";
}
cout<<endl;
cout<<"time   "<<(end-begin) / (float)CLOCKS_PER_SEC <<endl;
getch();
}
