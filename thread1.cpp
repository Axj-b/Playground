// Einfaches Beispiel für die Verwendung von Threads
//
// Das Programm erfordert c++11 - bie gcc muss dazu
// -std=c++11 gesetzt werden

#include <chrono>
#include <thread>
#include <iostream>

using namespace std;

void f(int t)
{
	cout << "Thread " << this_thread::get_id() << endl;
}

int main()
{
	thread t1(f, 4);

	cout << "t1.get_id(): " << t1.get_id() << endl;

	t1.join();

	cout << "t1.get_id(): " << t1.get_id() << endl;
	cout << "main() ist beendet" << endl;

	return 0;
}

