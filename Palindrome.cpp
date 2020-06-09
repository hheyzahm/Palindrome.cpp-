#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the length of Array : ";
    cin>>number;

    int pal[number];
    int  integer=0;
        for(int i=0;i<=(number-1);i++)
        {
            cout<<i<<" Enter the integer number for Palindrome : ";
            /*integer=getch();
            cout<<integer;
            number[i]=integer;*/
            cin>>pal[i];
        }
        cout<<endl;
        bool flag=true;

        int r=0;
        r=number-1;
        for ( int i=0;i<=r; i++)
            {
                    if (pal[i]!=pal[r-i-1])
                    {
                        flag=false;
                    }
                    r--;
            }

    (flag!=false)? cout<<"The given input is not Palindrome."<<endl:cout<<"The given input is Palindrome."<<endl;
        cout << endl;
    return 0;
}
