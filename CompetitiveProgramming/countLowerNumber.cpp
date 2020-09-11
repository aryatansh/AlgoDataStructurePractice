//Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. 
//That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<unordered_map>

using namespace std;

 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        unordered_map<int,int> maps;
        maps.insert(make_pair(1,1));
        auto x=maps.find(10);
        int i=x->second;
    }

int main(){
    return 0;

}