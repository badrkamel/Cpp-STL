#include<bits/stdc++.h>
using namespace std;

void Push()
{
    clock_t start,finish;
    int times=20,cnt=10000000;
    int sum=0;
    for(int i=0;i<times;i++)
    {
        start=clock();
        vector<int> vec;
        for(int i=0;i<cnt;i++)
            vec.push_back(1);
        finish=clock();
        double tmp=(double)(finish-start)/CLOCKS_PER_SEC;
        cout<<"cost of time/ms:"<<tmp*1000<<endl;
        sum+=tmp*1000;
    }
    cout<<"the average time for push_back:"<<sum/times<<endl;
}



void Emplace()
{
    clock_t start,finish;
    int times=20,cnt=10000000;
    int sum=0;
    for(int i=0;i<times;i++)
    {
        start=clock();
        vector<int> vec;
        for(int i=0;i<cnt;i++)
            vec.emplace_back(1);
        finish=clock();
        double tmp=(double)(finish-start)/CLOCKS_PER_SEC;
        cout<<"cost of time/ms:"<<tmp*1000<<endl;
        sum+=tmp*1000;
    }
    cout<<"the average time for emplace_back:"<<sum/times<<endl;
}


int main()
{
    Push();
    Emplace();
    return 0;
}
