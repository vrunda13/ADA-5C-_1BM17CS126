/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
/*void get(vector<vector<int>> & b)
{
    int n;
    cout<<"enter the size\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<b.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }
    
}*/


bool isplace(int c,vector<vector<int>> & b,int row,int col)
{
    cout<<"\n"<<"isplaced";
    for(int i=0;i<b.size();i++)
    {
        if(b[i][col]==c)
        {
            return false;
        }
    }
    for(int j=0;j<b.size();j++)
    {
        if(b[row][j]==c)
        {
            return false;
        }
    }
    
   int  re=(int)sqrt(b.size());
    int I=row/re;
    int J=col/re;
    
    int R =re*I;
    int C =re*J;
    
    for(int i=0;i<re;i++)
    {
        for(int j=0;j<re;j++)
        {
            if(c==b[R+i][C+j])
            {
                return false;
            }
        }
    }
    return true;
    
}

bool test(int row,int col,vector<vector<int>> & b)
{
    if(col==b[row].size())
    {
        cout<<col<<" "<<b[row].size()<<"\n";
        col=0;
        row++;
        if(row==b.size())
        {
            cout<<row;
            cout<<"done\n";
            return true;
        }
    }
    
    if(b[row][col] != 0)
    {
        test(row,col+1,b);
    }
    for(int i=1;i<=b.size();i++)
    {
     if(isplace(i,b,row,col))
     {
         b[row][col]=i;
         cout<<"\n"<<i<<"placed"<<"\n";
         if(test(row,col+1,b))
         {
             return true;
         }
     }
    }
    b[row][col]=0;
    return false;
}
bool slover(vector<vector<int>> & b)
{
    cout<<"sloc";
    return test(0,0,b);
}
int main()
{
    bool c;
    vector<vector<int>> b{ { 2, 0, 0,0 }, 
                               { 0, 1, 3,0 }, 
                               { 3, 0, 0,1 },
                               {0,2,4,0}}; 
                               
  
   cout<<b[0][0];
   c=slover(b);
 
        for(int i=0;i<b.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<"\n";
        }
    
    return 0;
}

