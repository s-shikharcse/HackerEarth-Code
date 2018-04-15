#include <iostream>
using namespace std;

int main()
{    
     int a[3][3];
     int b[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        a[i][j] = 1;
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        cin>>b[i][j];
         if(b[i][j]%2 != 0)
        {
                a[i][j] = (a[i][j] ^ 1);
                if(i<2){
                 a[i+1][j] = (a[i+1][j] ^ 1);   
                }
                if(j<2){
                 a[i][j+1] = (a[i][j+1] ^ 1);   
                }
                if(i>0){
                 a[i-1][j] = (a[i-1][j] ^ 1);   
                }
                if(j>0){
                a[i][j-1] = (a[i][j-1] ^ 1);    
                }
                //main diagonal
                if(i>0 and j>0){
                a[i-1][j-1] = (a[i-1][j-1] ^ 1);    
                }
                if(i<2 and j<2){
                a[i+1][j+1] = (a[i+1][j+1] ^ 1);    
                } 
                //other diagonal
                if(i<2 and j>0){
                a[i+1][j-1] = (a[i+1][j-1] ^ 1); 
                }
                if(j<2 and i>0){
                a[i-1][j+1] = (a[i-1][j+1] ^1);
                }   
        }
        //cout<<a[i][j]<<" ";
        }
        //cout<<endl;
    }
    
    int count = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j] == 1)
            {
            count++;    
            }
        }    
    }
    cout<<count<<endl;
}
