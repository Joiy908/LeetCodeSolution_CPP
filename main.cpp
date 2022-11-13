#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <iterator>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
      unordered_map<int, int> hashMap;
      for (int i = 0; i < nums.size(); ++i) {
        auto it = hashMap.find(target - nums[i]);
        if(it != hashMap.end())
          return {i, it->second};
        hashMap[nums[i]] = i;
      }
      return {};
    }
};
int main() {
  vector<int> v{2,7,11,15};
  Solution s;
  auto rst = s.twoSum(v, 9);
  copy(rst.begin(), rst.end(), ostream_iterator<int>(cout, " "));
  return 0;
}
