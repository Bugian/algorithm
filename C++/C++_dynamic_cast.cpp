#include <iostream>

class Monster {
public:
  virtual ~Monster(){} // Facem destructorul virtual
};

class Dragon : public Monster {
public:
  void DerivedFunction(){
    std::cout << "and Dragon" << std::endl;
  }
};

void CallMethod(Monster& Object) {
  Dragon* dragonPtr = dynamic_cast<Dragon*>(&Object); // Convertim folosind pointeri
  if (dragonPtr != nullptr) {
    // Conversia a reușit, putem folosi dragonPtr
    std::cout << "Conversia a reușit" << std::endl;
    dragonPtr->DerivedFunction();
  } else {
    // Conversia a eșuat
    std::cout << "Conversia a eșuat" << std::endl;
  }
}

int main() {
  Monster BaseObject;
  std::cout << "Încercăm conversia pe obiectul de bază: ";
  CallMethod(BaseObject);

  Dragon DerivedObject;
  std::cout << "Încercăm conversia pe obiectul derivat: ";
  CallMethod(DerivedObject);
}
