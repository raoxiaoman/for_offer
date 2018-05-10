#include <vector>
#include <string.h>
#include <string>
#include <iostream>
#include <ctype.h>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str,int length) {
        vector<string> adds;
        int count = 0;

        for (int i = 0; i < length; ++i) {
            if(isblank(str[i])){
                count++;
            }
        }
        for (int i=length-1;i>=0;i--){
            if(!isblank(str[i])){
                str[i+2*count] =str[i];
            }else{
                count--;
                str[i+2*count] = '%';
                str[i+2*count+1] = '2';
                str[i+2*count+2] = '0';
            }
        }
        cout << str << endl;

        
	}
};

int main(int argc, char *argv[])
{
    char str[] = "hello world";
    cout << str << endl;
    Solution s;
    s.replaceSpace(str,strlen(str));
    
    return 0;
}
