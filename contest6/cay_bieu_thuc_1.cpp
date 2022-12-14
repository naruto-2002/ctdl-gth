#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		stack<string> S;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] >= 'a' && s[i] <= 'z')S.push(string(1, s[i]));
			else {
				string a = S.top(); S.pop();
				string b = S.top(); S.pop();
				S.push( b + s[i] + a);
			}
		}
		cout << S.top() << endl;
	}
}

//CÂY BIỂU THỨC 1
//
//Cây biểu thức là một cây nhị phân trong đó mỗi node trung gian là một phép toán, mỗi node lá là một toán hạng. Ví dụ với biểu thức P = 3 + ((5+9)*2) sẽ được biểu diễn như cây dưới đây.
//
//Đối với cây biểu thức, duyệt theo thứ tự trước ta sẽ được biểu thức tiền tố, duyệt theo thứ tự sau ta sẽ được biểu thức hậu tố, duyệt theo thứ tự giữa ta được biểu thức trung tố. Chú ý, cây biểu thức luôn là cây nhị phân đầy (mỗi node trung gian đều có hai node con).
//
//Cho biểu thức hậu tố P, hãy sử dụng cây biểu thức để đưa ra biểu thức trung tố tương ứng với biểu thức P.
//
//Input:
//
//Dòng đầu tiên đưa vào số lượng bộ test T.
//Những dòng tiếp theo đưa vào các bộ test. Mỗi bộ test là một biểu thức hậu tố P.
//T, P thỏa mãn ràng buộc : 1≤T≤100; 1≤lengh(P)≤100.
//Output:
//
//Đưa ra biểu thức trung tố tương ứng với P.
//      Ví dụ:
//
// 
//
//Input
//
//Output
//
//2
//ab+ef*g*-
//wlrb+-*
//
//a + b - e * f * g
//
//w * l - r + b