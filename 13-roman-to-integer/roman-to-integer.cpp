class Solution {
public:
   
int romanToInt(string s) {
  if (s.empty()) return 0;
  int sz = s.size();
  int num = 0;
  // value of last digit - значение последнего разряда
  int lastDig = 0; 
  // строку просматриваем в обратном порядке
  for  (int i = sz - 1;  i>=0; --i){
   
     
    // temp value временное, существует только в цикле
    int n = 0;
     // convert rome digit to decimal - римский разряд в десятичный
    switch(s[i]) {
        case 'M' : 
            n = 1000;
            break;
        case 'D' :
            n = 500;
            break;
        case 'C' :
            n = 100;
            break;
        case 'L' :
            n = 50;
            break;
        case 'X' :
            n = 10;
            break;
        case 'V' :
            n = 5;
            break;
        case 'I' :
            n = 1;
            break;
    };
    // if current value less than когда текущий разряд меньше
    if ( n < lastDig ) 
        { num -= n; } // decrease value последнего, то уменьшим последний разряд 
    else 
        { num += n; }; // increase value иначе увеличим его на эту цифру
    // запомним последний разряд    
    lastDig = n; // remember value of lastDig
}
return num;
        }
};