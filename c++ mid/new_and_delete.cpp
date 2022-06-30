#include <iostream>
using namespace std;

int main()
{
    float a = 9;
    float *ptr;
    ptr = &a;
    cout << *ptr << endl;
    ptr = new float(30.98);
    cout << *ptr << endl;

    ptr = new float[5];
    // for (int i=0;i<3;i++){
    //     ptr[i]=(10*(i+1));
    //     cout<<ptr[i]<<endl;
    // }
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    delete ptr;
    cout << ptr[0] << endl;
    cout << ptr[1] << endl;
    cout << ptr[2] << endl;
    cout << ptr[3] << endl;
    cout << ptr[4] << endl;

    return 0;
}