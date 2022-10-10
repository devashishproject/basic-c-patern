#include <iostream>

using namespace std;

int main()
{
   int n;
   int i=0;
   cin>>n;
   while(i<=n){
       
       int space=n-i;
       while(space){
           cout<<"*";
          space=space-1;
       }
       int j=1;
       
       while(j<=i){
           //int star=n-i+1;
            
           cout<<" ";
          
          j=j+1;
           
       }
       cout<<endl;
       i=i+1;
   }

int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
