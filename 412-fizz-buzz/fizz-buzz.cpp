// answer[i] == i (as a string) if none of the above conditions are true
class Solution {
public:
vector<string> fizzBuzz(int n) {
  vector<string> res;
  for (int i = 1; i <= n; i++) {
    string value = to_string(i);
    if (i % 3 == 0 && i % 5 == 0) {
      value = "FizzBuzz";
    } else if (i % 3 == 0) {
      value = "Fizz";
    } else if (i % 5 == 0) {
      value = "Buzz";
    };
    res.push_back(value);
  };
  return res;
}
};