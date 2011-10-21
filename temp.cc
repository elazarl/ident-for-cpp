int g = 0;
struct Ctor {
	Ctor(int i){g = i;}
};

Ctor a(1),b(2),c(3);

int main(int,char**) {
	g = 12;
}
