#include <bits/stdc++.h>
using namespace std;

//* #include <bits/stdc++.h>
//* C++の全ての機能を読み込む初期設定

//* using namespace std;
//* #includeで読み込んだ機能を記述する際に省略できる

//* ---------------------------------------------
// TODO B - 1.01.出力とコメント
int main() {
    //* コメント

    /* 
    * 複数行のコメント
    */
    cout << "Hello World" << endl;
}

//* ---------------------------------------------
// TODO E - 1.04.変数と型 

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 一年の秒数
  int seconds = 365 * 24 * 60 * 60;

  // 以下のコメント/* */を消して追記する
  cout << seconds * 1 << endl;
  cout << seconds * 2 << endl;
  cout << seconds * 5 << endl;
  cout << seconds * 10 << endl;
}

//* ---------------------------------------------
// TODO F - 1.05.実行順序と入力

// 出力はcoutに<<でデータを送っている
// 入力はcinから変数に>>でデータを送っている

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a+b << endl;
}
//* ---------------------------------------------
// TODO G - 1.06.if文・比較演算子・論理演算子

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    string op;
    cin >> a >> op >> b;

    if (op == "+") {
        cout << a + b << endl;
    } else if(op == "-") {
        cout << a - b << endl;
    } else if(op == "*") {
        cout << a * b << endl;
    } else if(op == "/") {
        if(b != 0) {
            cout << a / b << endl;
        } else {
            cout << "error" << endl;
        }
    } else {
        cout << "error" << endl;
    }
}

//* ---------------------------------------------
// TODO 

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 変数a,b,cにtrueまたはfalseを代入してAtCoderと出力されるようにする。
    bool a = true;
    bool b = false;
    bool c = true;

  // ここから先は変更しないこと

    if (a) {
        cout << "At";
    }
    else {
        cout << "Yo";
    }

    if (!a && b) {
        cout << "Bo";
    }
    else if (!b || c) {
        cout << "Co";
    }

    if (a && b && c) {
        cout << "foo!";
    }
    else if (true && false) {
        cout << "yeah!";
    }
    else if (!a || c) {
        cout << "der";
    }

    cout << endl;
}

//* ---------------------------------------------
// TODO I - 1.08.変数のスコープ


#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    cin >> p;

    int price;
    // パターン1
    if (p == 1) {
        cin >> price;
    }

    // パターン2
    if (p == 2) {
        string text;
        cin >> text >> price;
        cout << text << "!" << endl;
    }

    int N;
    cin >> N;

    cout << price * N << endl;
}

//* ---------------------------------------------
// TODO J - 1.09.複合代入演算子

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b;
    cin >> x >> a >> b;

    // 1.の出力
    x++;
    cout << x << endl;

    // ここにプログラムを追記
    // 2
    x *= (a+b);
    cout << x << endl;
    // 3
    x *= x;
    cout << x << endl;
    // 4
    x--;
    cout << x << endl;

}

//* ---------------------------------------------

// TODO K - 1.10.while文
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int i = 0;
    // ここにプログラムを追記
    cout << "A:";
    while(i < A) {
        cout << "]";
        i++;
    }
    cout << endl;

    i = 0;
    cout << "B:";
    while(i < B) {
        cout << "]";
        i++;
    }
    cout << endl;
    
}

//* ---------------------------------------------
// TODO L - 1.11.for文・break・continue

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    // ここにプログラムを追記
    for(int i = 1; i <= n; i++) {
        string op;
        int b;
        cin >> op >> b;
        if(op == "+") {
            a += b;
            cout << i << ":" << a << endl;
        } else if(op == "-") {
            a -= b;
            cout << i << ":" << a << endl;
        } else if(op == "*") {
            a *= b;
            cout << i << ":" << a << endl;
        } else {
            if(b != 0) {
                a /= b;
                cout << i << ":" << a << endl;
            } else {
                cout << "error" << endl;
                break;
            }
        }
    }
}

//* ---------------------------------------------
// TODO M - 1.12.文字列と文字

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int ans = 1;
    // ここにプログラムを追記
    for(int i = 1; i < S.size(); i += 2) {
        if(S.at(i) == '+') {
            ans++;
        } else {
            ans--;
        }
    }
    cout << ans << endl;
}

//* ---------------------------------------------
// TODO N - 1.13.配列

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n, 0);


    int ave = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        ave += arr[i];
    }
    ave /= n;

    for(int i = 0; i < n; i++) {
        if (arr[i] > ave) {
        cout << arr[i] - ave << endl;
        }
        else {
        cout << ave - arr[i] << endl;
        }
    }
}

//* ---------------------------------------------
// TODO O - 1.14.STLの関数(Standard Template Library)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int ans1 = max(max(a, b), c);
    int ans2 = min(min(a, b), c);
    cout << ans1 - ans2 << endl;
}


//* ---------------------------------------------
// TODO P - 1.15.関数

#include <bits/stdc++.h>
using namespace std;

// 1人のテストの点数を表す配列から合計点を計算して返す関数
// 引数 scores: scores.at(i)にi番目のテストの点数が入っている
// 返り値: 1人のテストの合計点
int sum(vector<int> scores) {
    // ここにプログラムを追記
    int testSum = 0;
    for(int i = 0; i < scores.size(); i++) {
        testSum += scores[i];
    }
    return testSum;
}

// 3人の合計点からプレゼントの予算を計算して出力する関数
// 引数 sum_a: A君のテストの合計点
// 引数 sum_b: B君のテストの合計点
// 引数 sum_c: C君のテストの合計点
// 返り値: なし
void output(int sum_a, int sum_b, int sum_c) {
    // ここにプログラムを追記
    cout << sum_a * sum_b * sum_c << endl;;
}

// -------------------
// ここから先は変更しない
// -------------------

// N個の入力を受け取って配列に入れて返す関数
// 引数 N: 入力を受け取る個数
// 返り値: 受け取ったN個の入力の配列
vector<int> input(int N) {
    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }
    return vec;
}

int main() {
    // 科目の数Nを受け取る
    int N;
    cin >> N;

    // それぞれのテストの点数を受け取る
    vector<int> A = input(N);
    vector<int> B = input(N);
    vector<int> C = input(N);

    // それぞれの合計点を計算
    int sum_A = sum(A);
    int sum_B = sum(B);
    int sum_C = sum(C);

    // プレゼントの予算を出力
    output(sum_A, sum_B, sum_C);
}


//* ---------------------------------------------
// TODO 
//* ---------------------------------------------
// TODO 