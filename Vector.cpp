// 一、vector容器构造
// #include <iostream>
// #include <vector>
// using namespace std;

// void printVector(vector<int> &v)
// {
//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
// }
// void test01()
// {
//     //默认构造
//     vector<int> v1;
//     for (int i = 0; i < 10; i++)
//     {
//         v1.push_back(i);
//     }
//     printVector(v1);

//     //从v.begin()和v.end()中间插入
//     vector<int> v2(v1.begin(), v1.end());
//     printVector(v2);

//     //n个elem构造
//     vector<int> v3(10, 100);
//     printVector(v3);

//     //拷贝构造
//     vector<int> v4(v1);
//     printVector(v4);
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//二、vector赋值操作
// #include <iostream>
// #include <vector>
// using namespace std;

// void printVector(vector<int> &v)
// {
//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << ' ';
//     }
//     cout << endl;
// }
// void test01()
// {
//     vector<int> v;
//     for (int i = 0; i < 10; i++)
//     {
//         v.push_back(i);
//     }
//     printVector(v);
//     // operator=()
//     vector<int> v1 = v;
//     printVector(v1);

//     // assign()
//     // v.begin->v.end()赋值
//     vector<int> v2;
//     v2.assign(v.begin(), v.end());
//     printVector(v2);
//     // n个elem方式赋值
//     vector<int> v3;
//     v3.assign(10, 100);
//     printVector(v3);
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//三、vector容量和大小
// #include <iostream>
// #include <vector>
// using namespace std;

// void printVector(vector<int> &v)
// {
//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
// }

// void test01()
// {
//     vector<int> v;
//     for (int i = 0; i < 10; i++)
//     {
//         v.push_back(i);
//     }
//     printVector(v);

//     if (v.empty())
//     {
//         cout << "v为空" << endl;
//     }
//     else
//     {
//         cout << "v不为空" << endl;
//     }
//     cout << "v的容量是: " << v.capacity() << endl;
//     cout << "v的大小是: " << v.size() << endl;

//     //如果没有指定扩张后的内容，则默认为0
//     v.resize(15);
//     printVector(v);
//     //如果指定了扩张后的内蓉，则显示内容
//     v.resize(20, 100);
//     printVector(v);
//     //如果选择减少了容器大小，则超出的内容会被删除
//     v.resize(5);
//     printVector(v);
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

// 四、vector的插入和删除
// #include <iostream>
// #include <vector>
// using namespace std;

// void printVector(vector<int> &v)
// {
//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
// }
// void test01()
// {
//     vector<int> v;
//     //尾插
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//     v.push_back(50);

//     printVector(v);

//     //尾删
//     v.pop_back();
//     printVector(v);

//     //插入
//     v.insert(v.begin(), 100);
//     printVector(v);
//     // insert的重载版本
//     v.insert(v.end(), 3, 100);
//     printVector(v);

//     //删除
//     v.erase(v.begin());
//     printVector(v);
//     // erase重载版本
//     // v.erase(v.begin(), v.end());==v.clear()
//     v.clear();
//     printVector(v);
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//五、vector数据存取
// #include <iostream>
// #include <vector>
// using namespace std;

// void test01()
// {
//     vector<int> v;

//     for (int i = 0; i < 10; i++)
//     {
//         v.push_back(i);
//     }

//     //通过operator[]
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << ' ';
//     }
//     cout << endl;

//     //通过at()
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v.at(i) << ' ';
//     }
//     cout << endl;

//     //访问第一个元素
//     cout << "第一个元素为：" << v.front() << endl;
//     //访问最后一个元素
//     cout << "最后一个元素为；" << v.back() << endl;
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//六、vector容器互换
// #include <iostream>
// #include <vector>
// using namespace std;

// void printVector(vector<int> &v)
// {
//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;
// }
// //基本使用
// void test01()
// {
//     vector<int> v1;
//     for (int i = 0; i < 10; i++)
//     {
//         v1.push_back(i);
//     }

//     vector<int> v2;
//     for (int i = 10; i > 0; i--)
//     {
//         v2.push_back(i);
//     }

//     cout << "交换前" << endl;
//     printVector(v1);
//     printVector(v2);

//     cout << "交换后" << endl;
//     v1.swap(v2);
//     printVector(v1);
//     printVector(v2);
// }

// //实际用法
// //巧用swap()实现收缩内存
// void test02()
// {
//     vector<int> v;
//     for (int i = 0; i < 100000; i++)
//     {
//         v.push_back(i);
//     }

//     cout << "v的容量为: " << v.capacity() << endl;
//     cout << "v的大小为: " << v.size() << endl;

//     v.resize(3);
//     cout << "重置后: " << endl;
//     cout << "v的容量为: " << v.capacity() << endl;
//     cout << "v的大小为: " << v.size() << endl;

//     vector<int>(v).swap(v); //匿名对象
//     cout << "收缩内存后: " << endl;
//     cout << "v的容量为: " << v.capacity() << endl;
//     cout << "v的大小为: " << v.size() << endl;
// }
// int main()
// {
//     test01();
//     cout << "-----------------------------------------" << endl;
//     test02();
//     system("pause");
//     return 0;
// }

// 七、vector预留空间
#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v;
    //预留空间100000
    v.reserve(100000);
    int num = 0;
    int *p = NULL;

    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);

        if (p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }
    cout << num << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}