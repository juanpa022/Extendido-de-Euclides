#include <iostream>
using namespace std;
int EuclidesExtendido(int b,int a)
{
    int x,y,r;
    int s1 = 0, s2 = 1;
    while(b>0)
        {
        x = a/b;
        r = a - x*b;
        a = b;
        b = r;
        y = s1 - (x*s2);
        s1 = s2;
        s2 = y;
        }
    return s1;
}
int main()
{
  cout<<EuclidesExtendido(1554,366)<<"\n";
  cout<<EuclidesExtendido(366,1554);
  return 0;
}
