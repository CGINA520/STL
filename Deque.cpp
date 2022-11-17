//一、deque构造函数
// #include <iostream>
// #include <deque>
// using namespace std;

// void printDeque(deque<int> &d)
// {
//     for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//     {
//         cout << *it << ' ';
//     }
//     cout << endl;
// }

// void test01()
// {
//     //默认构造
//     deque<int> d1;
//     for (int i = 0; i < 10; i++)
//     {
//         d1.push_back(i);
//     }
//     printDeque(d1);

//     //区间
//     deque<int> d2(d1.begin(), d1.end());
//     printDeque(d2);

//     // n个elem
//     deque<int> d3(10, 100);
//     printDeque(d3);

//     //拷贝构造
//     deque<int> d4(d3);
//     printDeque(d4);
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//二、deque赋值操作
// #include <iostream>
// #include <deque>
// using namespace std;

// void printDeque(deque<int> &d)
// {
//     for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//     {
//         cout << *it << ' ';
//     }
//     cout << endl;
// }
// void test01()
// {
//     deque<int> d;
//     for (int i = 0; i < 10; i++)
//     {
//         d.push_back(i);
//     }
//     // opetator=()
//     deque<int> d1;
//     d1 = d;
//     printDeque(d1);

//     // assign()
//     //区间
//     deque<int> d2(d1.begin(), d1.end());
//     printDeque(d2);
//     // n个elem
//     deque<int> d3(10, 100);
//     printDeque(d3);
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//三、deque容器大小操作
// #include <iostream>
// #include <deque>
// using namespace std;

// void printDeque(const deque<int> &d)
// {
//     for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
// }
// void test01()
// {
//     deque<int> d;
//     for (int i = 0; i < 10; i++)
//     {
//         d.push_back(i);
//     }
//     printDeque(d);

//     if (d.empty())
//     {
//         cout << "deque d 为空" << endl;
//     }
//     else
//     {
//         cout << "deque d 不为空" << endl;
//         cout << "大小为： " << d.size() << endl;
//     }

//     d.resize(15, 1);
//     printDeque(d);

//     d.resize(5);
//     printDeque(d);
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

// 四、deque的插入和删除
// #include <iostream>
// #include <deque>
// using namespace std;

// void printDeque(deque<int> d)
// {
//     for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
// }
// void test01()
// {
//     //双端操作
//     deque<int> d;
//     d.push_back(10);
//     d.push_back(20);
//     d.push_front(100);
//     d.push_front(200);
//     printDeque(d);

//     d.pop_back();
//     d.pop_front();
//     printDeque(d);
// }

// void test02()
// {
//     deque<int> d;
//     for (int i = 1; i < 6; i++)
//     {
//         d.push_front(i);
//     }
//     printDeque(d);

//     //插入
//     d.insert(d.end(), 100);
//     printDeque(d);

//     d.insert(d.begin(), 2, 10);
//     printDeque(d);

//     //指定位置插入一个区间
//     deque<int>::iterator it = d.begin();
//     it++;
//     d.insert(it, d.begin(), d.end());
//     printDeque(d);

//     //删除
//     d.erase(d.begin());
//     printDeque(d);

//     d.erase(it, d.end());
//     printDeque(d);

//     d.clear();
//     printDeque(d);
// }
// int main()
// {
//     test01();
//     cout << "--------------------------------" << endl;
//     test02();
//     system("pause");
//     return 0;
// }

//五、deque数据存取
// #include <iostream>
// #include <deque>
// using namespace std;

// void test01()
// {
//     deque<int> d;

//     d.push_back(10);
//     d.push_back(20);
//     d.push_back(30);
//     d.push_front(100);
//     d.push_front(200);
//     d.push_front(300);

//     //通过operator[]访问
//     for (int i = 0; i < d.size(); i++)
//     {
//         cout << d[i] << " ";
//     }
//     cout << endl;
//     //通过at()方式访问
//     for (int i = 0; i < d.size(); i++)
//     {
//         cout << d.at(i) << ' ';
//     }
//     cout << endl;

//     cout << "第一个元素为: " << d.front() << endl;
//     cout << "最后一个元素为：" << d.back() << endl;
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

// deque容器的排序
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printDeque(const deque<int> &d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d;

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);

    printDeque(d);

    cout << "排序后： " << endl;
    sort(d.begin(), d.end());

    printDeque(d);
}
int main()
{
    test01();
    system("pause");
    return 0;
}