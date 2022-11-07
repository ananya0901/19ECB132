#include<iostream>
using namespace std;
class matrix
{
	int x[10][10];
	int row;
	int col;
	public:
		void getmatrix(int r, int c) 
		{
		 matrix M1;
		 row = r;
         col = c;
		 for (int i = 0; i < row; i++) {
         for (int j = 0; j < col; j++) {
        cout << "Enter x[" << i << "][" << j << "] : ";
        cin >> x[i][j];
      }
    }
  }
  
  matrix add(matrix m2) {
    matrix m;
    cout<<"\nsum of objects of same matrix\n";
    m.row = row;
    m.col = col;
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        m.x[i][j] = x[i][j] + m2.x[i][j];
      }
    }
    return (m);
  }
  void putmatrix() {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        cout << x[i][j] << " ";
      }
      cout << "\n";
    }
  }
  void operator + (matrix u)
{
        int mat[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        mat[i][j]=x[i][j]+u.x[i][j];
                }
        }
        cout<<"\n Addition of Matrix using operator overloading: \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
 matrix transpose() {
    matrix M;
    M.row = row;
    M.col = col;
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        M.x[j][i] = x[i][j];
      }
    } 
    return (M);
  }
  friend matrix sum(matrix A,matrix B);
};
matrix sum(matrix A,matrix B) 
{

            int i,j; 
            cout<<"\nSUM OF MATRICES using freind fuctions:\n"; 
            for(i=0;i<A.row;i++)
            {
               for(j=0;j<A.col;j++) 
                cout<<A.x[i][j]+B.x[i][j]<<" ";
                cout<<endl; 
              }
            }
int main()
{

  matrix M1, M2, M3,M4;
  cout << "Enter Matrix objA\n" << endl;
  M1.getmatrix(3,3);
  cout << "\nEnter Matrix objB\n" << endl;
  M2.getmatrix(3, 3);
  M3 = M1.add(M2);
  cout << "\nAddition of A and B matrix\n" << endl;
  M3.putmatrix();
  M1+M2;
  cout<<"\n";
  M4= M1.transpose();
  cout << "\nTranspose of matrix\n" << endl;
  M4.putmatrix();
  cout<<"\n";
  sum(M1,M2);
  cout<<"\n";
  return 0;
}
