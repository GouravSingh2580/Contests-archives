#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost ::multiprecision ;
using namespace std;
int main()
{
    cpp_int n;
    cin>>n;
    for(cpp_int i=1;i<=n;i++)
    {
        cpp_int a,f;
        cin>>a;
        if((a==1)||(a==0))
        {
            cout<<"1"<<endl;
        }
        else{
            for(cpp_int j=a-1;j>0;j--)
            {
                f=a*j;
                a=f;
                
            }
            cout<<f<<endl;
            
        }
        
    }
    return 0;
}

//in this  i learnt about boosting the initialisation in cpp programs , it is great.
