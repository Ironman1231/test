//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <string.h>
//using namespace std;
//#define a(x) x;x;x;x;x;x;x;x;x;x;
//
//vector<int> get()
//{
//    vector<vector<int>> vec;
//    vector<int> a;
//    a.push_back(1);
//    vec.push_back(a);
//    return vec[0];
//}
//
//vector<int> getRow(int rowIndex) {
//    vector<vector<int>> vec;
//    vector<int> a, a1;
//    a.push_back(1);
//    vec.push_back(a);
//    if (rowIndex == 0) return vec[0];
//    for (int i = 1; i <= rowIndex; i++)
//    {
//        vector<int> a;
//        for (int j = 0; j <= i; j++)
//        {
//            if (j == 0 || j == i) a.push_back(1);
//            else
//            {
//                a.push_back(vec[i - 1][j - 1] + vec[i - 1][j]);
//                vec.push_back(a);
//            }
//        }
//    }
//    return vec[0];
//}
//
//int getNum()
//{
//    return 1;
//}
//
//int main() {
//    /*int n = 1;
//    a(a(printf("%d ", n++)));*/
//    //vector<vector<int>> vec;
//    //vec.push_back(getRow(0));
//    /*int my_array[5] = { 1, 2, 3, 4, 5 };*/
//    // ÿ������Ԫ�س��� 2
//    /*for (int& x : my_array)
//    {
//        x *= 2;
//        cout << x << endl;
//    }*/
//    vector<int> vec(5);
//    //if (int temp = getNum()==2) cout << temp;
//    /*string a[2] = { "asdfsfdl" , "adsdd" };
//    cout << a[1][2];*/
//    string a = "abcdef";
//    char b = a[2];
//    //cout << b;
//    cout << vec[0];
//    
//    return 0;
//}


// constructing unordered_maps
//#include <iostream>
//#include <string>
//#include <unordered_map>
//using namespace std;
//
//typedef unordered_map<string, string> stringmap;
//
//stringmap merge(stringmap a, stringmap b) {
//	stringmap temp(a); temp.insert(b.begin(), b.end()); return temp;
//}
//
//int main()
//{
//	stringmap first;                              // ��
//	stringmap second({ {"apple","red"},{"lemon","yellow"} });       // �������ʼ
//	cout << second;
//	stringmap third({ {"orange","orange"},{"strawberry","red"} });  // �������ʼ
//	stringmap fourth(second);                    // ���Ƴ�ʼ��
//	stringmap fifth(merge(third, fourth));        // �ƶ���ʼ��
//	stringmap sixth(fifth.begin(), fifth.end());  // ��Χ��ʼ��
//
//	cout << "sixth contains:";
//	for (auto& x : sixth) cout << " " << x.first << ":" << x.second;
//	cout << endl;
//
//	return 0;
//}

#include<stdio.h>
#include<iostream>
#include<algorithm>
#include <math.h>
using namespace std;
const int maxn = 100000 + 10;
const int INF = 2 * int(1e9) + 10;
#define LL long long
int cmd(int a, int b) {
	return a > b;
}
int main() {
	//int num[6] = { 1,2,4,7,15,34 };
	//sort(num, num + 6);                           //����С�������� 
	//int pos1 = lower_bound(num, num + 6, 7);    //���������е�һ�����ڻ���ڱ�������ֵ 
	//int pos2 = upper_bound(num, num + 6, 7) - num;    //���������е�һ�����ڱ�������ֵ
	//cout << pos1 << " " << num[pos1] << endl;
	//cout << pos2 << " " << num[pos2] << endl;
	//sort(num, num + 6, cmd);                      //���Ӵ�С����
	//int pos3 = lower_bound(num, num + 6, 7, greater<int>()) - num;  //���������е�һ��С�ڻ���ڱ�������ֵ 
	//int pos4 = upper_bound(num, num + 6, 7, greater<int>()) - num;  //���������е�һ��С�ڱ�������ֵ 
	//cout << pos3 << " " << num[pos3] << endl;
	//cout << pos4 << " " << num[pos4] << endl;
	//string str1;
	//cout << str1 << endl;

	//str1.insert(str1.length(), "111");			//�ӵ�һ��λ�ÿ�ʼ �����ַ���111
	//cout << "str1=" << str1 << endl;
	cout << 4 * 50 * 50;
	return 0;
}