#include <chrono>
#include <cstdlib>
#include <iostream>
#include <thread>

int main(int argc, char *argv[]) {
  char y;
  do {
    std::cout << "matikan komputer? y/n: ";
    std::cin >> y;

    if (y == 'y') {
      for (int i = 10; i >= 0; i--) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << i << "detik" << std::endl;

        if (i == 0) {
          system("systemctl poweroff");
        }
      }
    } else if (y == 'n') {
      std::cout << "program dibatalkan!!" << std::endl;
      break;
    } else {
      std::cout << "inputan salah!!! coba lagi!!!" << std::endl;
    }

  } while (true);
  return 0;
}
