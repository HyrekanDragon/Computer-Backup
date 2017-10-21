//combinatronics.cpp

int factorial(int x){
  //Base Case
  if(x == 0 || x == 1){
    return 1;
  }
  //Recursive Case
  return x * factorial(x-1);
}

int permutation(int n, int k){
  return factorial(n)/factorial(n-k);
}

int combination(int n, int k){
  return permutation(n,k)/factorial(k);
}
