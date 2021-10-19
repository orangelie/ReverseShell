/* 서버 */
#include "ReverseShell.hpp"

int main(void) {
	try {
		// 8080번 포트로 리버스 쉘 서버를 리스닝한다.
		mawile::ReverseShell* rShell = new mawile::ReverseShell(8080);



		delete rShell;
		return (0);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		return (-1);
	}

	return (0);
}