#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if(Arr[iCnt] > Max)
       {
            Max = Arr[iCnt];
       }
    }
    return Max;
}

int main()
{
    int iRet = 0;
    int Data[] = {510,220,430,40};
    iRet = Maximum(Data,4);
    cout<<"Maximum is : "<<iRet<<"\n";
    

    float info[] = {10.1f,20.1f,30.1f,40.1f,50.1f};
    float fRet = Maximum(info,5);
    cout<<"Maximum is : "<<fRet<<"\n";
    
    return 0;
}