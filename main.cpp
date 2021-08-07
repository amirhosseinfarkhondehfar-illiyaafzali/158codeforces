#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int counter = 0, max = 0,placezero=-1;
    for (int i = 0; i < a; i++)
    {
        int c;
        cin>>c;
        if (placezero==-1&&c==0)
        {
            placezero=i;
        }
        
        if (i == b - 1)
        {
            max=c;
        }

        if (i >= b&&c==max)
        {
          counter++;
        }
    }
    if (max!=0)
    {
        cout<<b+counter<<endl;
    }
    else{
        cout<<b-(b-placezero)<<endl;
    }
    
}