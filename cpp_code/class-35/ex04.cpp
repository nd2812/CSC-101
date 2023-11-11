#include <iostream>

using namespace std;

class Matrix {
public:
  Matrix(int rows, int cols) : rows(rows), cols(cols) {
    data = new int*[rows];
    for (int i = 0; i < rows; i++) {
      data[i] = new int[cols];
      for (int j = 0; j < cols; j++) {
        data[i][j] = 0;
      }
    }
  }

  ~Matrix() {
    for (int i = 0; i < rows; i++) {
      delete[] data[i];
    }
    delete[] data;
  }

  Matrix operator+(const Matrix& other) {
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        result.data[i][j] = data[i][j] + other.data[i][j];
      }
    }
    return result;
  }

  void print() {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        cout << data[i][j] << " ";
      }
      cout << endl;
    }
  }

public:
  int rows;
  int cols;
  int** data;
};

int main() {
  Matrix m1(2, 2);
  m1.data[0][0] = 1;
  m1.data[0][1] = 2;
  m1.data[1][0] = 3;
  m1.data[1][1] = 4;

  Matrix m2(2, 2);
  m2.data[0][0] = 5;
  m2.data[0][1] = 6;
  m2.data[1][0] = 7;
  m2.data[1][1] = 8;

  Matrix result = m1 + m2;

  result.print();

  return 0;
}