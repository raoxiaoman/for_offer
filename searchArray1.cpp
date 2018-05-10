#include <vector>
#include <iostream>


using namespace std;
class Solution {
    public:
        bool Find(int target, vector<vector<int> > array) {
            for (auto i : array) {
                if(_find(target, i)){
                    return true;
                }

            }
            return false;

        }
        bool _find(int target,vector<int> a){
            int first = 0;
            int end = a.size() -1 ;
            while(first!=end){
                int mid = (first + end ) /2; 
                if(target > a[mid]){
                    first = mid + 1;

                }else if(target < a[mid]){
                    end = mid -1;
                }else{
                    return true;
                }
            }

            return false;


        }
};
