#include <iostream>
#include "mystack.h"
using namespace std;

int main()
{

    try
    {
        cout << "Stack with std::string type" << endl; //стек строковых
        MyStack <string> mystack;
        mystack.push("please");
        mystack.push("do");
        mystack.push("not");
        mystack.push("fail");
        mystack.push("i");
        mystack.push("hope");
        mystack.push("it");
        mystack.push("is");
        mystack.push("work");

        cout << "my stack contains: " << endl;//вывод стека
        while (! mystack.empty())//итерация, чтобы не было пустого стека
        {
            auto top = mystack.top();
            for (auto i = 0; i < top.size(); ++i)
            {
                cout << top[i];
            }
            cout << ' ';
            mystack.pop();
        }
        cout << endl;

        mystack.push("014");
        mystack.push("228");
        mystack.push("322");
        mystack.push("133");
        mystack.pop();
        mystack.push("888");
        while (! mystack.empty())
        {
            auto top = mystack.top();
            for (auto i = 0; i < top.size(); ++i)
            {
                cout << top[i];
            }
            cout << ' ';
            mystack.pop();
        }
        cout << endl;

//	если откроете комментарии, сгенерируется исключение
//        mystack.pop();
//        mystack.pop();
    }
    catch (int a)
    {
        cerr << "Stack is empty" << endl;
        exit(1);
    }

    try
    {
        cout << endl;
        cout << "Stack with int type" << endl;//стек целочисленного типа
        MyStack <int> mystack;
        mystack.push(1);
        mystack.push(2);
        mystack.push(3);
        mystack.push(4);
        mystack.push(5);
        mystack.push(6);
        mystack.push(7);
        mystack.push(8);
        mystack.push(9);

        cout << "my stack contains: " << endl;//вывод стека
        while (! mystack.empty())
        {
            cout << mystack.top() << " ";
            mystack.pop();
        }
        cout << endl;

        mystack.push(0);
        mystack.push(7);
        mystack.push(6);
        mystack.push(3);
        mystack.pop();
        mystack.push(9);
        while (! mystack.empty())
        {
            cout << mystack.top() << ' ';
            mystack.pop();
        }
        cout << endl;

//	если откроете комментарии, сгенерируется исключение
//        mystack.pop();
//        mystack.pop();
    }
    catch (int a)
    {
        cerr << "Stack is empty" << endl;
        exit(1);
    }

    try
    {
        cout << endl;
        cout << "Stack with double type" << endl;//стек чисел с плавающей точкой 
        MyStack <double> mystack;
        mystack.push(1.12);
        mystack.push(2.24);
        mystack.push(3.14);
        mystack.push(4.66);
        mystack.push(5.26);
        mystack.push(6.76);
        mystack.push(7.81);
        mystack.push(8.72);
        mystack.push(9.99);

        cout << "my stack contains: " << endl;
        while (! mystack.empty())
        {
            cout << mystack.top() << " ";//вывод стека
            mystack.pop();
        }
        cout << endl;

        mystack.push(0.34);
        mystack.push(7.77);
        mystack.push(6.66);
        mystack.push(3.33);
        mystack.pop();
        mystack.push(9.55);
        while (! mystack.empty())
        {
            cout << mystack.top() << " ";
            mystack.pop();
        }
        cout << endl;

//	если откроете комментарии, сгенерируется исключение
//        mystack.pop();
//        mystack.pop();
    }
    catch (int a)
    {
        cerr << "Stack is empty" << endl;
        exit(1);
    }
	system("pause");
    return 0;
}
