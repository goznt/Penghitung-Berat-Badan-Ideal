#include <iostream>
using namespace std;
int main ()
{
    float tinggi;
    float ideal;
    cout<<"Program Penghitung Berat Badan Ideal\n";
    cout<<"====================================\n";
    cout<<"Tinggi anda (m) : ";
    cin>>tinggi;
    ideal = (tinggi-100) - (0.1*(tinggi-100));
    cout<<"hasil : "<<ideal<<endl;
    return 0;
}
