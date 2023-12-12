//#33 Search in rotated sorted array.
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};

//441. Arranging Coins

class Solution {
public:
    int arrangeCoins(int n) {
     int c = n;
     int i = 1;
     while(c > 0)
     {
         if(n == 0) return 0;
         else if(n == 1) return 1;
        i++;
        c-=i;
     }
     return i -1;
    }
};
//991. Broken Calculator
class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int result = 0;
        while(target > startValue)
        {
            result++;
            if(target%2 == 0)
        {
            target = target/2;
        }
        else
        target+=1;
        }
        result = result + (startValue - target);
        return result;
    }
};
