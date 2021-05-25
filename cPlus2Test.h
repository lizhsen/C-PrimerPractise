#include <vector>
#include<iostream>
#include <string>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int len = gas.size();
        for(int i = 0; i<len;++i){
            //计数
             if(gas[i]<cost[i]){
                continue;
            }
            else{
                //start
                int n = 0;
                int sum = 0;
                int j = i;
                while(n<len){
                    sum += gas[(j+len)%len]-cost[(j+len)%len];
                    cout<<sum<<endl;
                    if(sum >=0){
                        ++n;
                        ++j;
                    }else{
                        break;
                    } 
                }
                if(n == len) return i;
            }
        }
    return -1;
    }
};

class Test341{
    public:
    int a[8]={1,2,3,4,5,6,7,8};
    vector<int> toVector(){
        vector<int> subVec(begin(a),begin(a)+3);
        return subVec;
    }
};

class Test342{
    public:
    vector<int> vec={1,2,3,4,5,6,7,8};
    int arr[100];
    int*  toArr(){
        auto bpos = begin(vec);
        while(bpos!=end(vec)){
            arr[bpos-begin(vec)] = *bpos;
            ++bpos;
        }
        return arr;
    }
};

class Test343{
    public:
    int ia[3][4]=
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,11,12,13}
    };
    void printMethod2(){
        for(int m=0; m <3;++m){
            for(int n = 0; n<4;++n){
                cout << ia[m][n]<<" ";
            }
            cout << endl;
        }
    };
    void printMethod1(){
        for(int (&row)[4]:ia){
            for(int ele : row) cout<< ele<<" ";
            cout <<endl;
        }
    };
    void printMethod3(){
        for(int (*pr)[4]=ia;pr != ia+3; ++pr){
            for(int *pele = *pr; pele != *pr+4; ++pele) cout << *pele<<" ";
            cout <<endl;
        }
    };

};