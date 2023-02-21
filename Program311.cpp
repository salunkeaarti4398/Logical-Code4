#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int iSize)
{
    int iCnt = 0;
    T iSum;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iRet = 0;
    int Data[] = {10,20,30,40};
    iRet = Addition(Data,4);
    cout<<"Addition is : "<<iRet<<"\n";
    

    float info[] = {10.1f,20.1f,30.1f,40.1f,50.1f};
    float fRet = Addition(info,5);
    cout<<"Addition is : "<<fRet<<"\n";
    
    return 0;
}