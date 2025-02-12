class Solution
{

    // Top - down DP
private:
    int fibHelper(int n, vector<int> &A)
    {
        if (n <= 1)
            return n;

        if (A[n] != -1)
            return A[n];

        A[n] = fibHelper(n - 1, A) + fibHelper(n - 2, A);
        return A[n];
    }

public:
    int fib(int n)
    {
        vector<int> A(n + 1, -1);

        return fibHelper(n, A);
    }
};

/*
class Solution {
    //Bottom-up DP
    public:
        int fib(int n) {
            if (n == 0) return 0;
            if (n == 1) return 1;
            vector<int> A(n+1);
            A[0]=0;
            A[1]=1;

            for(int i=2;i<=n;i++){
                A[i]=A[i-1]+A[i-2];
            }
            return A[n];
        }
    };
*/