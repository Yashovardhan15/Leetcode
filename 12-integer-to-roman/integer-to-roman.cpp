class Solution {
public:
//     string intToRoman(int num) {
//         const vector<pair<int, string>> rome{
//             {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
//         {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
//         {5, "V"},    {4, "IV"},   {1, "I"}
//         };

//         string ans;
//         for (const auto& [value, symbol] : rome){
//             if (num == 0) break;
//             while(num >= value){
//                 num -= value;
//                 ans += symbol;
//             }
//         }
//         return ans;
//     }
// };


    string intToRoman(int num) {
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[]={"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};

    
        
    