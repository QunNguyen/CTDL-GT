#include<iostream>
using namespace std;

class thangnam
{
public:
    thangnam() {
        this->nam = nam;
        this->thang = thang;
    }
	thangnam(int thang, int nam);
    void nhapbp() {
        cin >> this->thang;
        cin >> this->nam;
    }
    void xemmh() {
        cout << thang <<" "<< nam;
    }
    friend int tinh(thangnam) ;
private:
	int thang;
	int nam;
};

int tinh(thangnam a) {
    thois
}

int main() {
    thangnam a,c,b(10, 2021);
    a.nhapbp();
    a.xemmh();
   /* c = thangnam("thang 11 nam 2021");
    c.xemmh();
    cout << "\n" << (char*)(c);*/
    c = a + 20;
    c.xemmh();
    c = a - 20;
    b.xemmh();
}