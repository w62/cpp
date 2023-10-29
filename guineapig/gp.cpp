#include <iostream>

using namespace std;

class Base {
 public:
  virtual void someMethod();

 protected:
  int mProtectedInt;

 private:
  int mPrivateInt;
};

class Derived : public Base {
 public:
  virtual void someMethod() override;
  virtual void someOtherMethod();
};

int main() {
  Base* base = new Derived();

  // virtual function binding

  // Non-virtual function binding
  //
  base->someOtherMethod();
  return 0;
}

void Base::someMethod() {
  cout << "This is Base's version of someMethod(). " << endl;
}

void Derived::someMethod() {
  cout << "This is Derived's version of someMethod(). " << endl;
}

void Derived::someOtherMethod() { cout << "SomeOtherMethod " << endl; }