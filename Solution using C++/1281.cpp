//                                                         Jay Shree Radhe
#include<iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1,sum=0;
        while(n>0)
        {
            pro*=(n%10);
            sum+=(n%10);
            n/=10;
        }
        int answer;
        //answer=pro>=sum?pro-sum:sum-pro;
        answer=pro-sum;
        return answer;
    }
};

int main()
{
  Solution aa;
  cout<<aa.subtractProductAndSum(234);
  return 0;
}