/**
 * @file main.cpp
 * @author Chitsanupong Rongpan (pp.rongpan@gmail.com)
 * @brief For my study
 *
 */
#include<iostream> //for I/O
#include<vector> //for vector
#include<complex> //for complex

double square(double x){
  return x*x;
}

void variable_test(){
  double d = 2.2; // floating
  int i = 7; //integer
  d = d+i; //arithmetic Ps. you can also use d+=i for adding and d-=i for decrement
  i = d*i; //arithmetic
  i--; // i = i + 1
  i++; // i = i - 1
  const int a = 15; // constant value
  std::complex<double> z = 1; // I hate forgetting "std::"
  std::vector<int> aa = {1,2,3,4,5};
  auto b = true; // Auto state the type!
}

void intLowerUpper(){
  int i1 = 7.2; // i1 get lower
  int i2 = 7.8; // i2 get lower anyways
  /* You cannot use init an array of integer with floating point in it because it will not get lowered and you will get error 'floating point to integer' */
  // int i2 = {7.2}; <-- will give you error
  std::cout<<i2<<std::endl;
}

int printbooleen(){
  char x;
  while(true)
  {
    std::cin>>x;
    switch (x){
      case '0':
        std::cout<<"It is 0\n";
        return 0;
      case '1':
        std::cout<<"It is 1\n";
        return 0;
      default:
        std::cout<<"Please input 0 or 1\n";
        break;
    }
  }
}

bool boolean(char a){
  switch (a){
    case '0':
      return true;
    case '1':
      return false;
    default:
      return false;
  }
}

void print_square(double x){
  std::cout<<"Square of "<<x<<" is " << square(x) << "\n";
}

void ptrtest(){
  char v[6]; // array of character
  v[3] = 'F';
  char* p; // points to character
  p = &v[3]; // points to v[3]
  std::cout << "v[3] is " << *p << std::endl; // p* = the object that p points to
}

void arrLoop(){
  int v[4];
  for (int i = 0; i < 4; i++){
    v[i] = i;
    auto trailspace = " ";   // number's trailing space stuff
    if (i == 3){
      auto trailspace = "";
    }
    std::cout<<v[i]<<trailspace; // cout the current element in array
  }
  std::cout<<std::endl;
}

void arrLoopPTR(){
  int v[4];
  int* p;
  for (int i = 0; i < 4; i++){
    p = &v[i];
    std::cout<<*p<<std::endl;
  }
}

int main(int argc, char const *argv[])
{
  std::cout<<"Hello\n";
  print_square(1.233);
  intLowerUpper();
  printbooleen();
  ptrtest();
  arrLoop();
  arrLoopPTR();
  return 0;
}
