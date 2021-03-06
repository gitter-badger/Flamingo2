#include "core.hpp"
#include "mainwindow.hpp"

Core::Core(int &argc, char **&argv) : QApplication(argc, argv) {
	window = new MainWindow(this->arguments());
	window->show();
}

Core::~Core() {
	delete window;
}

int main (int argc, char * * argv) {
	qsrand(time(NULL));
	Core C {argc, argv};
	return C.exec();
}
