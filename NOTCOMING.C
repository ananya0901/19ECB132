#include<iostream>
#include<iomanip>
using namespace std;
class matrixf1;
class trans;
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
void transpose(matrix &) { 
    matrix M;
    M.row = row;
    M.col = col;
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        M.x[j][i] = x[i][j];
      }
    }
   
  }
  
  friend void matrixsum(matrix &,matrixf1 &);

};
class matrixf1
{
 int y[10][10];
	int row;
	int col;
	public:
		void getmatrix2(int r, int c) 
		{
		 matrixf1 M1;
		 row = r;
         col = c;
		 for (int i = 0; i < row; i++) {
         for (int j = 0; j < col; j++) {
        cout << "Enter x[" << i << "][" << j << "] : ";
        cin >> y[i][j];
      }
    }
  }	
  void putmatrix2() {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        cout << y[i][j] << " ";
      }
      cout << "\n";
    }
  }
 
  friend void matrixsum(matrix &,matrixf1 &);


};
void matrixsum(matrix &g,matrixf1 &h) 
{
            int i,j; 
            cout<<"\nSUM OF MATRICES using freind fuctions:\n"; 
            for(i=0;i<g.row;i++)
            {
               for(j=0;j<g.col;j++) 
                cout<<g.x[i][j]+h.y[i][j]<<" ";
                cout<<endl; 
              }
            }
int main() {
  matrix M1, M2, M3;
  cout << "Enter Matrix objA\n" << endl;
  M1.getmatrix(3,3);
  cout << "\nEnter Matrix objB\n" << endl;
  M2.getmatrix(3, 3);
  M3 = M1.add(M2);
  cout << "\nAddition of A and B matrix\n" << endl;
  M3.putmatrix();
  M1+M2;
  cout<<"\n";
  cout << "Enter Matrix:\n" << endl;
  M1.getmatrix(3, 3);
  cout << "\nMatrix:" << endl;
  M1.putmatrix();
  cout << endl;
  M2=M1.transpose(M1);
  cout << "\nTranspose of matrix\n" << endl;
  M2.putmatrix();
  matrix m1;
  matrixf1 m2;
  cout << "Enter Matrix A\n" << endl;
  m1.getmatrix(3,3);
  cout<<"\n";
  cout << "Enter Matrix B\n" << endl;
  m2.getmatrix2(3,3);
  cout<<"\n";
  matrixsum(m1,m2);
  cout<<"\n";
 
  

  return 0;
}
