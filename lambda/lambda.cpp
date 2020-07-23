#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*
    auto maior =[](int n1, int n2)->int
    {
        return (n1>n2) ? n1 : n2;
    };

    cout << maior(8,6) << endl;
    */

   /*
    auto maior =[](vector<int>n)->int
    {
        auto m=0;
        for(int x:n)
        {
            m=(m>x) ? m : x;
        }
        return m;
    };

    cout << maior({1,2,5,45,58,2,35,1,0,98,5,105}) << endl;
    */

   /*
    int x1,x2,x3,x4;
    x1=10;
    x2=5;
    x3=2;
    x4=12;

    auto soma=[x1,x2,x3,x4]()->int{
        return x1+x2+x3+x4;
    };

    cout << soma();
   */
  
    /*
    int x1,x2,x3,x4;
    x1=10;
    x2=5;
    x3=2;
    x4=12;

    auto soma=[=]()->int{
        return x1+x2+x3+x4;
    };

   cout << soma();
   */

    int x1,x2,x3,x4;
    x1=10;
    x2=5;
    x3=2;
    x4=12;
    auto somaVariaveisAoMaior =[=](vector<int>n)->int
    {
        auto m=0;
        for(int x:n)
        {
            m=(m>x) ? m : x;
        }
        return m+x1+x2+x3+x4;
    };

    cout << somaVariaveisAoMaior({1,2,5,45,58,2,35,1,0,98,5,105}) << endl;

    return 0;
}