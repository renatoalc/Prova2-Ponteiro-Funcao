#include <iostream>
using namespace std;

void vetor (int *vet,int N, int *max, int *min){
  int k=0;

  *max = vet[0];
  while (k < N){
    if (vet[k] > *max){
      *max = vet[k];
    }
    k=k+1;
  }
  k=0;

  *min = vet[0];
  while (k < N){
    if (vet[k] < *min){
      *min = vet[k];
    }
    k=k+1;
  }
  k=0;

}

int main() {
  int *vet,max,min;
  int N,k=0;

  cout << "Número de elementos do vetor?"<<endl;
  cin >> N;

  vet = (int*)(malloc(N*sizeof(int)));

  while (k < N){
    cin >> vet[k];
    k = k+1; 
  }
  k=0;
 
  vetor (vet,N,&max,&min);
  

  while (k < N){
    cout<<vet[k]<<",";
    k=k+1;
  }

  cout << endl;
  cout << "Max= " << max << "," << "Min= " << min;

}