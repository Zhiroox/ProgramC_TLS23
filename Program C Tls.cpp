#include <iostream>

using namespace std;

int main(){
    
    int jk;
    float berat, tinggi, bmi, meter;
    
    cout<<"----------------------------------"<<endl;
    cout<<"          Kalkulator BMI          "<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<endl;
    
    cout<<"-Jenis Kelamin-"<<endl;
    cout<<"Laki - Laki = 1"<<endl;
    cout<<"Perempuan   = 2"<<endl;
    
    cout<<"Masukkan Jenis kelamin 1 atau 2 : ";
    cin>>jk;
    cout<<"Masukkan Berat badan anda       : ";
    cin>>berat;
    cout<<"Masukkan Tinggi anda            : ";
    cin>>tinggi;
    
    meter=tinggi/100;
    bmi=(berat/meter*meter);
    cout<<endl;
    
    cout<<"BMI              : "<<bmi<<" ";
    
    if (bmi<18.5){
        cout<<"(kurus)"<<endl;
    }else if (bmi<=24.9){
        cout<<"(Normal)"<<endl;
    }else if (bmi,29.9){
        cout<<"(Overweight)"<<endl;
    }else {
        cout<<"(Obesitas)"<<endl;
    }
    
    

    return 0;
}
