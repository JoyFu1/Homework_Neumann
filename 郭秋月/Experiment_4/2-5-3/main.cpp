#include <iostream>
#include <cmath>
#include "2-5-3.h"

using namespace std;

int main()
{
    int *e,*ee;
    e = new int[20];
    ee=e;
    cout<<"������ 20 ����ֵ:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*e;
        e++;
    }

    calculate(ee);
    sortscore(ee);
    panddnumber(ee);
    delete[]ee;
}
