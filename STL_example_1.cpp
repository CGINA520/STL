//评委打分系统
//用vector存放五名选手，deque存放十个评委给予选手的评分，去掉最高分和最低分，计算平均成绩

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
using namespace std;

class Person
{
public:
    Person(string name, int score)
    {
        this->m_Name = name;
        this->m_Score = score;
    }
    string m_Name;
    int m_Score;
};

void cratePerson(vector<Person> &v)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < 5; i++)
    {
        string name = "选手";
        name += nameSeed[i];

        int score = 0;
        Person p(name, score);

        v.push_back(p);
    }
}

void setScore(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        //将分数传入到deque中
        deque<int> d;
        for (int i = 0; i < 10; i++)
        {
            int score = rand() % 41 + 60;
            d.push_back(score);
        }

        //排序
        sort(d.begin(), d.end());

        //去掉最大值和最小值
        d.pop_back();
        d.pop_front();

        //计算平均值
        int sum = 0;
        for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
        {
            sum += (*dit);
        }
        int average = sum / d.size();

        //经计算的平均值赋值给选手
        it->m_Score = average;
    }
}

void showScore(vector<Person> &v)
{
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "姓名：" << (*it).m_Name << "   "
             << "得分：" << (*it).m_Score << endl;
    }
}

int main()
{
    //随机数种子：
    srand((unsigned int)time(NULL));

    // 1.创建5名选手
    vector<Person> v;

    cratePerson(v);
    //测试 cratePerson(v)功能
    // for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << "姓名：" << (*it).m_Name << "   "
    //          << "得分：" << (*it).m_Score << endl;
    // }

    // 2.给五名选手打分
    setScore(v);

    //显示得分
    showScore(v);

    system("pause");
    return 0;
}