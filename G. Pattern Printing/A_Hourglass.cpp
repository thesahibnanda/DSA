#include <iostream>

using namespace std;

void revTriangle(int n)
{
    int N = (2*n)-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<(N-i); j++)
        {
            if(j<i)
            {
                cout<<"  ";
            }
            else if((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void straightTriangle(int n) 
{
    int N = (2*n) - 1;
    for(int i=0; i<n; i++) 
    {
        if(i==0)
        {
            continue;
        }
        for(int j=0; j<N; j++) 
        {
            int center = N / 2;
            int start = center - i;
            int end = center + i;
            if(j >= start && j <= end) 
            {
                if((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) 
                {
                    cout << "* ";
                } 
                else 
                {
                    cout << "  ";
                }
            } 
            else 
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    if(!(n%2))
    {
        for(int i=0; i<n; i++)
        {
            cout<<"*   ";
        }
    }
}

void hourGlass(int n)
{
    revTriangle(n);
    straightTriangle(n);
}

int main()
{
    int n;
    cout<<"Number of Rows: ";
    cin>>n;
    hourGlass(n);
}

/*
Output:

Number of Rows: 9
*   *   *   *   *   *   *   *   * 
  *   *   *   *   *   *   *   * 
    *   *   *   *   *   *   * 
      *   *   *   *   *   * 
        *   *   *   *   * 
          *   *   *   * 
            *   *   * 
              *   * 
                * 
              *   *               
            *   *   *             
          *   *   *   *           
        *   *   *   *   *         
      *   *   *   *   *   *       
    *   *   *   *   *   *   *     
  *   *   *   *   *   *   *   *   
*   *   *   *   *   *   *   *   * 


*/