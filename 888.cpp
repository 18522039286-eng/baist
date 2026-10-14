#include <iostream>
using namespace std;
int main()
{
    int *p = new int[10] {3,5,1,11,99,66,22,2,8,6};
    int *pp =new int[12];
    int a=666;
    int b=66666;
    int insertCount=0;
    for (int i=0;i<12;i++)
    {
        if (i==5)
        {
            pp[i]=a;
            insertCount++;
            continue;
        }
        if (i==8)
        {
            pp[i]=b;
            insertCount++;
            continue;
        }
        pp[i]=p[i-insertCount];
    }
    delete[] p;
    p=pp;
    pp=nullptr;
    for (int i=0;i<12;i++)
    {
        cout << p[i] << "\n";
    }
    delete[] p;
    return 0;
}



