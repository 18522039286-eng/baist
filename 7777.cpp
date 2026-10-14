#include "iostream"
#include "random"
using namespace std;
int grm (int min,int max)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution dis(min,max);
    int rn =dis(gen);
    return rn;
}
void az(int arr[],int l)
{
    for (int i=0;i<l;i++)
    {
        int min=i;
        for (int j=i;j<l;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main()
{
    int nums[10];
    for (int i=0;i<10;i++)
    {
        nums[i]=grm(1,100);
    }
    for (int i=0;i<10;i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";
    az(nums,10);
    for (int i=0;i<10;i++)
    {
        cout << nums[i] << " ";
    }
}