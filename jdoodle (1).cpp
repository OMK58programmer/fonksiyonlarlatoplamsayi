/* 
Welcome to JDoodle!

You can execute code here in 88 languages. Right now you’re in the C++ IDE.

  1. Click the orange Execute button ▶ to execute the sample code below and see how it works.

  2. Want help writing or debugging code? Type a query into JDroid on the right hand side ---------------->

  3. Try the menu buttons on the left. Save your file, share code with friends and open saved projects.

Want to change languages? Try the search bar up the top. 
*/

#include <iostream>
using namespace std;

int toplamsayi(int hesaplanacaksayi[]) {
    int toplamsayi = hesaplanacaksayi[0];

    for(int i=0; i<6; i++){
            toplamsayi = toplamsayi + hesaplanacaksayi[i];
    }

    return toplamsayi;
}

int main() {
    int sayilar1[6] = {5, 88, 555, 33, 11, 44};
    

    int donusDegeri1 = toplamsayi(sayilar1);
    

    cout << "toplam " << endl;
    cout << donusDegeri1 << endl;
    
    return 0;
}