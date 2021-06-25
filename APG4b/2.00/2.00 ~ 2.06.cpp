#include <bits/stdc++.h>
using namespace std;

//? #include <bits/stdc++.h>
//* C++の全ての機能を読み込む初期設定

//? using namespace std;
//* #includeで読み込んだ機能を記述する際に省略できる

//* ---------------------------------------------
// TODO R - 2.01.ループの書き方と範囲for文

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
    // ここにプログラムを追記
    string ans = "NO";
    for(int i = 0; i < data.size() -1; i++) {
        if(data[i] == data[i+1]) {
            ans = "YES";
            break;
        }
    }
    cout << ans << endl;
}

//* ---------------------------------------------
// TODO S - 2.02.多重ループ

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++) {
        cin >> P.at(i);
    }

    // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
    // ここにプログラムを追記
    int count = 0;
    for(int i = 0; i < A.size(); i++) {
        for(int j = 0; j < P.size(); j ++) {
            if(A[i] + P[j] == S) count++;
        }
    }
    cout << count << endl;
}

//* ---------------------------------------------
// TODO T - 2.03.多次元配列


#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    // ここにプログラムを追記
    // (ここで"試合結果の表"の2次元配列を宣言)
    vector<vector<char>> table(N, vector<char>(N, '-'));  
    for(int i = 0; i < M; i++) {
        A[i]--;
        B[i]--;
        table[A[i]][B[i]] = 'o';
        table[B[i]][A[i]] = 'x';
        // table[i][i] = '-';

    }
    //* -------------------------
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << table[i][j];
            if (j == N -1) {
                cout << endl; // 末尾なら改行
            }
            else {
                cout << " ";  // それ以外なら空白
            }
        }
    }
}



//* ---------------------------------------------
// TODO 
//* ---------------------------------------------
// TODO 
//* ---------------------------------------------
// TODO 
//* ---------------------------------------------
// TODO 
//* ---------------------------------------------
// TODO 
//* ---------------------------------------------
// TODO 
//* ---------------------------------------------
// TODO 
//* ---------------------------------------------
// TODO 
