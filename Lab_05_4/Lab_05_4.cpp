// Lab_05_4.cpp

#include <iostream>

using namespace std;



double P1(const int N,const int k, double p) {
    p *= (1.0 * (k - N) / (k + N) + 1);
    if (k <= N) {
        return p;
    }
    else {
        return P1(N, k - 1, p);
    }

}

double P2(const int N, const int k, double p) {
    p *= (1.0 * (k - N) / (k + N) + 1);
    if (k >= 19) {
        return p;
    }
    else {
        return P2(N, k + 1, p);
    }

}
double P3(const int N, const int k) {
    if (k < N) {
        return 1;
    }
    else {
        return (1.0 * (k - N) / (k + N) + 1) * P3(N, k-1);
    }
}

double P4(const int N, const int k) {
    if (k > 19) {
        return 1;
    }
    else {
        return (1.0 * (k - N) / (k + N) + 1) * P4(N, k+1);
    }

}

double P5(const int N) {
    double p = 1;

    for (int k = N; k <= 19;k++) {
        p *= (1.0 * (k - N) / (k + N) + 1);

    }
    return p;
}




int main()
{
    int N;

    cout << "N = "; cin >> N;

    cout << "(rec down --) P1 = " << P1(N, 19, 1) << endl;
    cout << "(rec down ++) P2 = " << P2(N, N, 1) << endl;
    cout << "(rec up --)   P3 = " << P3(N, 19) << endl;
    cout << "(rec up ++)   P4 = " << P4(N, N) << endl;
    cout << "(iter)        P5 = " << P5(N) << endl;

    return 0;
}

    

