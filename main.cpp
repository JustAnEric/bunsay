#include <iostream>
using namespace std;

void create_sign(string message) {
  int width = message.length() + 4;
  for (int i = 0; i < width; i++) {
    if (i == 0 || i == width - 1) {
      std::cout << "|";
    } else {
      //std::cout << "￣";
      std::cout << "¯";
    }
  }
  std::cout << "\n";
  std::cout << "| " + message + " |";
  std::cout << "\n";
  for (int i = 0; i < width; i++) {
    if (i == 0 || i == width - 1) {
      std::cout << "|";
    } else {
      std::cout << "_";
    }
  }
  std::cout << "\n";
}

void create_bunny() {
  std::cout << "(\\__/) ||\n";
  std::cout << "(•ㅅ•) ||\n";
  std::cout << "/ 　 づ\n";
}

int main(int argc, char* argv[]) {
  if (argc < 2) {
    cout << "usage: bunsay [message]\n";
    return 1;
  }

  string message = argv[1];
  create_sign(message);
  create_bunny();
  return 0;
}
