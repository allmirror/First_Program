#include <iostream>
#include <string>
#include <vector>
#include <cmath>


using namespace std;

namespace f_ns { //Пространство имен, которое можно создавать и использовать
enum eFile_Error{//Объявляем структуру
    OPEN
    , CLOSE
    , NO
};
}


namespace n_ns { //Пространство имен, которое можно создавать и использовать
enum eNetWork_Error{//Объявляем структуру
    OPEN
    , CLOSE
    , NO
};
}


enum class eNetWork_Rights : char {//Объявляем структуру для использования без пространства имен и указываем размерность char
    OPEN
    , CLOSE
    , NO
};


void foo_cpp(int &pi){
    pi=90;
    cout<<pi<<endl;
    cout<< "addr i = "<<hex<<&pi<<endl;
    cout<< "number i = 0x"<<hex<<pi<<endl;
}


int main()
{

    cout << sizeof (float) << endl;
    cout << sizeof (double) << endl;
    cout << sizeof (char) << endl;
    cout << sizeof (f_ns::eFile_Error) << endl;
    cout << sizeof (eNetWork_Rights) << endl;
    int i=0;
    foo_cpp(i);


    f_ns::eFile_Error ef_error = f_ns::NO;// Использование элементов структуры
    n_ns::eNetWork_Error en_error = n_ns::OPEN;
    eNetWork_Rights error_a = eNetWork_Rights::OPEN; //Использование элементов структуры без пространства имен



cout<<dec;//Переключаем в десятеричную систему исчисления

    int array[5]={1,2,3,4,5};
    for(auto i : array) //Перебор переменных вектора, либо массива с заранее известной последовательностью
        cout<<i<<",";
        cout<<endl;


    vector <int> vi;
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    vi.push_back(4);
    vi.push_back(5);

    for(auto i : vi)//Перебор переменных вектора
        cout<<i<<",";
        cout<<endl;

    for(int i=0;i<vi.size();i++){ //Перебор переменных вектора по размеру
       vi[i]=vi[i]*10;
        cout<<vi[i]<<",";
        }
    cout<<endl;

const int CPP_PI=3.14;
constexpr double CPP_exp_2 = CPP_PI/2.;
cout<<CPP_exp_2<<endl;




    return 0;







}
