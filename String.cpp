//一、初识STL
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void print(int val)
// {
//     cout << val << " ";
// }

// void test01()
// {
//     vector<int> v;

//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);

//     vector<int>::iterator itBagin = v.begin();
//     vector<int>::iterator itEnd = v.end();

//     //第一种遍历：
//     while (itBagin != itEnd)
//     {
//         cout << *itBagin << " ";
//         itBagin++;
//     }
//     cout << endl;

//     //第二种遍历:
//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *it << " ";
//     }
//     cout << endl;

//     //第三种遍历
//     //利用STL中的遍历
//     for_each(v.begin(), v.end(), print);
//     cout << endl;
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

// 二、vactor存放自定义数据类型
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// class Person
// {
// public:
//     Person(string name, int age)
//     {
//         this->m_Name = name;
//         this->m_Age = age;
//     }
//     string m_Name;
//     int m_Age;
// };

// void test01()
// {
//     vector<Person> v;

//     Person p1("张三", 10);
//     Person p2("李四", 20);
//     Person p3("王武", 30);
//     Person p4("张飞", 40);
//     Person p5("钟馗", 50);

//     v.push_back(p1);
//     v.push_back(p2);
//     v.push_back(p3);
//     v.push_back(p4);
//     v.push_back(p5);

//     for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << "姓名：" << it->m_Name << " "
//              << "年龄： " << it->m_Age << endl;
//     }
// }

// // vector存放指针类型
// void test02()
// {
//     vector<Person *> v;

//     Person p1("张三", 10);
//     Person p2("李四", 20);
//     Person p3("王武", 30);
//     Person p4("张飞", 40);
//     Person p5("钟馗", 50);

//     v.push_back(&p1);
//     v.push_back(&p2);
//     v.push_back(&p3);
//     v.push_back(&p4);
//     v.push_back(&p5);

//     for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << "姓名：" << (*it)->m_Name << " "
//              << "年龄： " << (*it)->m_Age << endl;
//     }
// }
// int main()
// {
//     test01();
//     cout << "----------------" << endl;
//     test02();
//     system("pause");
//     return 0;
// }

//三、vector容器嵌套容器
// #include <iostream>
// #include <vector>
// using namespace std;

// void test01()
// {
//     vector<int> v1;
//     vector<int> v2;
//     vector<int> v3;
//     vector<int> v4;

//     for (int i = 0; i < 4; i++)
//     {
//         v1.push_back(i + 1);
//         v2.push_back(i + 2);
//         v3.push_back(i + 3);
//         v4.push_back(i + 4);
//     }

//     vector<vector<int>> v;

//     v.push_back(v1);
//     v.push_back(v2);
//     v.push_back(v3);
//     v.push_back(v4);

//     for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//         {
//             cout << (*vit) << " ";
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

// 四、string容器_构造函数
// #include <iostream>
// #include <string>
// using namespace std;

// void test01()
// {
//     string s1;

//     const char *str = "hello world";
//     string s2(str);
//     cout << "s2=" << s2 << endl;

//     string s3(s2);
//     cout << "s3=" << s3 << endl;

//     string s4(10, 'a');
//     cout << "s4=" << s4 << endl;
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//五、string赋值操作
// #include <iostream>
// #include <string>
// using namespace std;

// void test01()
// {
//     //重载operator = ()
//     string str1;
//     str1 = "hello world";
//     cout << "str1= " << str1 << endl;

//     string str2;
//     str2 = str1;
//     cout << "str2= " << str2 << endl;

//     string str3;
//     str3 = 'a';
//     cout << "str3= " << str3 << endl;

//     // assign()
//     string str4;
//     str4.assign("hello world");
//     cout << "str4= " << str4 << endl;

//     string str5;
//     str5.assign("hello world", 5);
//     cout << "str5= " << str5 << endl;

//     string str6;
//     str6.assign(str5);
//     cout << "str6= " << str6 << endl;

//     string str7;
//     str7.assign(10, 'w');
//     cout << "str7= " << str7 << endl;
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//六、string字符串拼接
// #include <iostream>
// #include <string>
// using namespace std;

// void test01()
// {
//     // operator+=()
//     string str1 = "我";
//     str1 += "爱玩游戏";
//     cout << "str1= " << str1 << endl;

//     str1 += ':';
//     cout << "str1= " << str1 << endl;

//     string str2 = "LOL";
//     str1 += str2;
//     cout << "str1= " << str1 << endl;

//     // append()
//     string str3 = "I";
//     str3.append("love");
//     cout << "str3= " << str3 << endl;

//     str3.append("LOLEEEEEE", 3);
//     cout << "str3= " << str3 << endl;

//     str3.append(str2);
//     cout << "str3= " << str3 << endl;

//     str3.append(str3, 0, 8);
//     cout << "str3= " << str3 << endl;
// }
// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

// 七、string查找和替换(find();rfind();replace())
// #include <iostream>
// #include <string>
// using namespace std;

// //查找
// void test01()
// {
//     // find():从左往右找
//     string str1 = "abcdef";
//     int pos = str1.find("de");
//     if (pos == -1)
//     {
//         cout << "找不到子串" << endl;
//     }
//     else
//     {
//         cout << "子串的开始下标为: " << pos << endl;
//     }

//     // rfind():从右往左找
//     pos = str1.rfind("ef");
//     if (pos == -1)
//     {
//         cout << "找不到子串" << endl;
//     }
//     else
//     {
//         cout << "子串的开始下标为: " << pos << endl;
//     }
// }

// //替换
// void test02()
// {
//     string str1 = "abcdef";
//     //从指定的第1个位置，用11111替换字符串中三个字符
//     str1.replace(1, 3, "11111");
//     cout << "str1= " << str1 << endl;
// }
// int main()
// {
//     test01();
//     cout << "----------" << endl;
//     test02();
//     system("pause");
//     return 0;
// }

//八、string字符串比较(compare())
// #include <iostream>
// #include <string>
// using namespace std;

// void test01()
// {
//     string str1 = "hello";
//     string str2 = "hello";

//     if (str1.compare(str2) == 0)
//     {
//         cout << "str1=str2" << endl;
//     }
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//九、string字符存取([];at())
// #include <iostream>
// #include <string>
// using namespace std;

// void test01()
// {
//     string str = "hello";
//     //访问
//     //通过[]访问
//     for (int i = 0; i < str.size(); i++)
//     {
//         cout << str[i] << ' ';
//     }
//     cout << endl;

//     //通过at访问
//     for (int i = 0; i < str.size(); i++)
//     {
//         cout << str.at(i) << ' ';
//     }
//     cout << endl;

//     //修改
//     str[0] = 'a';
//     str.at(2) = 'a';
//     cout << str << endl;
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//十、string插入和删除(insert();erase())
// #include <iostream>
// #include <string>
// using namespace std;

// void test01()
// {
//     string str = "hello";
//     //插入
//     str.insert(1, "111");
//     cout << str << endl;
//     //删除
//     str.erase(1, 3);
//     cout << str << endl;
// }

// int main()
// {
//     test01();
//     system("pause");
//     return 0;
// }

//十一、子串获取(substr())
#include <iostream>
#include <string>
using namespace std;

void test01()
{
    string str = "lisi@sina.com";
    int pos = str.find("@");

    string str1 = str.substr(0, pos);
    cout << "str1= " << str1 << endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}