void matmatclassic(double **A, double **B, double **C, int N) 
{
    double tmp = 0.0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            tmp = 0.0;
            for(int k = 0; k < N; k++)
            {
                tmp += A[i][k] * B[k][j];
            }
            C[i][j] = tmp;
        }
    }
}

void matmatblock(double **A, double **B, double **C, int N, int block)
{
    double tmp = 0.0;
    for(int i = 0; i < N; i+=block)
    {
        for(int j = 0; j < N; j+=block)
        {
            for(int k = 0; k < N; k+=block)
            {
                for(int ii = i; ii < i + block; ii++)
                {
                    for(int jj = j; jj < j + block; jj++)
                    {
                        tmp = C[ii][jj];
                        for(int kk = k; kk < k + block; kk++)
                        {
                            tmp += A[ii][kk]*B[kk][jj];
                        }
                        C[ii][jj] = tmp;
                    }
                }
            }
        }
    }
}
