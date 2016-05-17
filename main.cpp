#include <iostream>

using namespace std;

template <typename Type>

Type max(Type val){//object references called a and b
    return val - 5;
}

int main(int argc, char** argv) {
    cout<<max(10)<<endl;
    cout<<max(20)<<endl;
    return 0;
}