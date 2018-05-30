// https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/submatrix-updates-1/
#include<iostream>
using namespace std;

int main()
{
	int N,M,K;
    cin >> N >> M >> K;

    int matrix[N+1][M+1] = {0};
    
    for(int i=1; i<=N;i++)
        for(int j=1; j<=M;j++)
        {
        	int value = 0;
            cin >> value;
            matrix[i][j] = value;
    	}
    for(int i=1 ; i<=K ; i++)
    {
        int R, C, S, D;
        cin >> R >> C >> S >> D;
        for(int row=R; row<=R+S -1 ; row++ )
            for(int col=C; col<=C+S -1 ; col++ )
            {
                matrix[row][col] += D;
            }
    }
//    cout << "\n\n";
    for(int i=1;i<=N;i++)
    {
    	for(int j=1; j<=M;j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
	}

}

