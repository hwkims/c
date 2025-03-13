// 8_1 class cpp abasic

#include <cstdio>

#include <cstring>

#include <iostream>


using namespace std;

void show_my_age(int age=20){
    cout<<"age :" << age << endl;
}

void (change (int & z)){
    z=33;
}

int main()
{

    show_my_age();
    printf("%d\n", 1234);

    cout << 1234;
    std::cout << 1234 << 3.14 << "abc" << '\n';
    std::cout << 1234 << 3.14 << "abc" << '\n';

    cout << 5678 << endl;
    cout << true << ' ' << false << endl;
    cout.operator<<(1234);

    // int a;

    // double b;

    // cin >> a >> b;

    // cout << a << ' ' << b << endl;


    int k=7;

    cout << k <<endl;

    int & t=k;
    t=99;

    cout<<k<<endl;

    change(k);
    cout<<k<<endl;

    string s= "my name is kim";

    cout <<s<<endl;
    cout<<s.length()<<endl;

    cout<<s[0]<<endl;
    return 0;
}