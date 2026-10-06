#include <iostream>
using namespace std;
int main()
{
    int *sourceArray = new int[10] {3,5,1,11,99,66,22,2,8,6};
    int *mergedArray =new int[12];
    int insertValue1=666;
    int insertValue2=66666;
    int insertCount=0;
    for (int i=0;i<12;i++)
    {
        if (i==5)
        {
            mergedArray[i]=insertValue1;
            insertCount++;
            continue;
        }
        if (i==8)
        {
            mergedArray[i]=insertValue2;
            insertCount++;
            continue;
        }
        mergedArray[i]=sourceArray[i-insertCount];
    }
    delete[] sourceArray;
    sourceArray=mergedArray;
    mergedArray=nullptr;
    for (int i=0;i<12;i++)
    {
        cout << sourceArray[i] << "\n";
    }
    delete[] sourceArray;
    return 0;
}



