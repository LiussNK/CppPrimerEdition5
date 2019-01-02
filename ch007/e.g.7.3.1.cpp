
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <vector>

class Screen {
public:
	typedef std::string::size_type pos;
	// using pos = std::string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd) {
		Screen(ht, wd, ' ');
	}
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}
	char get() const {
		return contents[cursor];
	}
	inline char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);
	void some_member() const;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	mutable size_t access_ctr;
};

inline
Screen &Screen::move(pos r, pos c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

char Screen::get(pos r, pos c) const {
	pos row = r * width;
	return contents[row + c];
}

void Screen::some_member() const {
	++access_ctr;
}

class Window_mgr {
public:
	Window_mgr();
	~Window_mgr();

private:
	std::vector<Screen> screens{ Screen(24, 80, ' ') };
};

Window_mgr::Window_mgr() {
}

Window_mgr::~Window_mgr() {
}
int main(int argc, char *argv[]) {
	Screen myscreen;
	char ch = myscreen.get();
	ch = myscreen.get(0, 0);

	return 0;
}


