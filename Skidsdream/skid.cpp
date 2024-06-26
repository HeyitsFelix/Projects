#include <iostream>

using namespace std;

int main() {
string script1 = "install_vim";
string script_chosin;
int run = 1;
string exit = "exit";

cout << "                                                          dddddddd ''''''\n";
cout << "   SSSSSSSSSSSSSSS kkkkkkkk             iiii              d::::::d '::::'                      DDDDDDDDDDDDD\n";
cout << " SS:::::::::::::::Sk::::::k            i::::i             d::::::d '::::'                      D::::::::::::DDD\n";
cout << "S:::::SSSSSS::::::Sk::::::k             iiii              d::::::d ':::''                      D:::::::::::::::DD\n";
cout << "S:::::S     SSSSSSSk::::::k                               d:::::d ':::'                        DDD:::::DDDDD:::::D\n";
cout << "S:::::S             k:::::k    kkkkkkkiiiiiii     ddddddddd:::::d ''''       ssssssssss          D:::::D    D:::::D rrrrr   rrrrrrrrr       eeeeeeeeeeee    aaaaaaaaaaaaa      mmmmmmm    mmmmmmm\n";
cout << "S:::::S             k:::::k   k:::::k i:::::i   dd::::::::::::::d          ss::::::::::s         D:::::D     D:::::Dr::::rrr:::::::::r    ee::::::::::::ee  a::::::::::::a   mm:::::::m  m:::::::mm\n";
cout << " S::::SSSS          k:::::k  k:::::k   i::::i  d::::::::::::::::d        ss:::::::::::::s        D:::::D     D:::::Dr:::::::::::::::::r  e::::::eeeee:::::eeaaaaaaaaa:::::a m::::::::::mm::::::::::m\n";
cout << "  SS::::::SSSSS     k:::::k k:::::k    i::::i d:::::::ddddd:::::d        s::::::ssss:::::s       D:::::D     D:::::Drr::::::rrrrr::::::re::::::e     e:::::e         a::::a m::::::::::::::::::::::m\n";
cout << "    SSS::::::::SS   k::::::k:::::k     i::::i d::::::d    d:::::d         s:::::s  ssssss        D:::::D     D:::::D r:::::r     r:::::re:::::::eeeee::::::e  aaaaaaa:::::a m:::::mmm::::::mmm:::::m\n";
cout << "       SSSSSS::::S  k:::::::::::k      i::::i d:::::d     d:::::d           s::::::s             D:::::D     D:::::D r:::::r     rrrrrrre:::::::::::::::::e aa::::::::::::a m::::m   m::::m   m::::m\n";
cout << "            S:::::S k:::::::::::k      i::::i d:::::d     d:::::d              s::::::s          D:::::D     D:::::D r:::::r            e::::::eeeeeeeeeee a::::aaaa::::::a m::::m   m::::m   m::::m\n";
cout << "            S:::::S k::::::k:::::k     i::::i d:::::d     d:::::d        ssssss   s:::::s        D:::::D    D:::::D  r:::::r            e:::::::e         a::::a    a:::::a m::::m   m::::m   m::::m\n";
cout << "SSSSSSS     S:::::Sk::::::k k:::::k   i::::::id::::::ddddd::::::dd       s:::::ssss::::::s     DDD:::::DDDDD:::::D   r:::::r            e::::::::e        a::::a    a:::::a m::::m   m::::m   m::::m\n";
cout << "S::::::SSSSSS:::::Sk::::::k  k:::::k  i::::::i d:::::::::::::::::d       s::::::::::::::s      D:::::::::::::::DD    r:::::r             e::::::::eeeeeeeea:::::aaaa::::::a m::::m   m::::m   m::::m\n";
cout << "S:::::::::::::::SS k::::::k   k:::::k i::::::i  d:::::::::ddd::::d        s:::::::::::ss       D::::::::::::DDD      r:::::r              ee:::::::::::::e a::::::::::aa:::am::::m   m::::m   m::::m\n";
cout << " SSSSSSSSSSSSSSS   kkkkkkkk    kkkkkkkiiiiiiii   ddddddddd   ddddd         sssssssssss         DDDDDDDDDDDDD         rrrrrrr                eeeeeeeeeeeeee  aaaaaaaaaa  aaaammmmmm   mmmmmm   mmmmmm\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "\n";
cout << "Type the script you want\n";
while(run == 1) {
cout << "< ";
cin >> script_chosin;
if(script_chosin == script1) {
cout << "Vim is installed bozo\n";
}
if(script_chosin != script1 && script_chosin != exit) {
cout << "Not a Command buddy\n";
}
if(script_chosin == exit) {
break;
}
}
return 0;
}

