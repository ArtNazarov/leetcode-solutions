#include <deque>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  
int evalRPN(std::vector<std::string>& tokens) {
      std::deque<double> nums; // or stack, need O(1) access to head
      // O(N) because need access to each token from list
      for (const auto& token: tokens) {
         // token[0] is char
         if ('+'==token[0]) {
                double num2 = nums.front(); // get from head arg2
                nums.pop_front(); // remove from head
                double num1 = nums.front(); // get from head arg1
                nums.pop_front(); // remove from head
                nums.push_front(num1 + num2); // eval and push to head
                cout << (int)(num1 + num2) << "\n";
            } else
           if ('-' == token[0] && token.size()==1 ){
                double  num2 = nums.front();
                nums.pop_front();
                double num1 = nums.front();
                nums.pop_front();
                nums.push_front(num1 - num2);
                
            } else
            if ( '*' == token[0]) {
                double num2 =   nums.front();
                nums.pop_front();
                double num1 =  nums.front();
                nums.pop_front();
                nums.push_front(num1 * num2);
                
            } else
            if( '/' == token[0]) {
                double  num2 = nums.front();
                nums.pop_front();
                double  num1 = nums.front();
                nums.pop_front();
                int d = (long long)num1 / (long long)num2;
                nums.push_front((double)d);
               
            } else
             {
                // convert string to integer for other cases
                nums.push_front(stoi(token));
            };
        };




	return (int )( nums.front() );

    };
    
 
};