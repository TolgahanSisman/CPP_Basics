#include <iostream>
using namespace std;
// 3! = 1.2.3

int faktoriyel(int n){
    int fakt=1;
    if (n==0)
        return(1);
    else if(n>0){
        for(int i=1; i<=n; i++){
            fakt=fakt*i; // f*=i
        }
        return(fakt);
    }
    else return(0);

}

int main() {
    int k;
    cout<< "Faktoriyeli alinan sayi:" << "\n";
    cin>>k;
    int sonuc=faktoriyel(k);
    cout<<"Sonuc:"<<sonuc;

     // 1/0! + 1/1! + 1/2! + 1/3! ... 1/m!
     int m;
     float toplam=0;
     cout <<"\n e sayısı icin m degerini giriniz:"<<"\n";
     cin>>m;
     for (int j=0; j<=m; j++)
     {
         toplam+= 1/(float)faktoriyel(j);
     }
    cout <<" e değeri :"<< toplam <<"\n";
    return 0;
}
