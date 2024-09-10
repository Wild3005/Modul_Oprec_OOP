# Dasar pemrograman C++ (Part 1)
### -> C vs C++
#### Bahasa C:
```C
#include<stdio.h>
int main(){
    printf("hello rival team");
    return 0;
}
```

#### Bahasa C++
```C++
#include<iostream>
int main(){
    std::cout << "hello rival team" << std::endl;
    return 0;
}
```
### Tipe Data
Terdapat beberapa tipe data:
> int (bilangan bulat) seperti 1, 23, 435
> float (bilangan desimal) seperti 1.111, 1.0, 3.0000
> boolean (true false) seperti 1, 0, true, false
> dan lainnya
### -> Operasi Aritmatika
##### Contoh penggunaan +,-,/,*:
```C++
#include<iostream>
int main(){
    int a = 4, b = 6;
    
    //penjumlahan
    std::cout << a+b << std::endl; // = 10
    //pengurangan
    std::cout << a-b << std::endl; // = -2
    //pembagian
    std::cout << a/b << std::endl; // = 0
    //perkalian
    std::cout << a*b << std::endl; // = 24
    //modulo
    std::cout << a%b << std::endl; // = 4
    
    return 0;
}
```
### -> Operasi Logika
##### Cotoh penggunaan AND OR NOT:
```C++
#include<iostream>
int main(){
    bool a = true, b = false;
    
    //penjumlahan
    std::cout << (a&&b) << std::endl; // = false
    //pengurangan
    std::cout << (a||b) << std::endl; // = true
    //pembagian
    std::cout << (!a) << std::endl; // = false
    //perkalian
    std::cout << !b << std::endl; // = true
    
    return 0;
}
```
### -> if else condition
##### if
contoh penggunaan:
```C++
#include <iostream>

int main() {
    int a;
    std::cin >> a;
    if(a == 1){
        std::cout << "anda memasukkan angka 1" << std::endl;
    }
    return 0;
}
```
##### if, else
contoh penggunaan:
```C++
#include <iostream>

int main() {
    int a;
    std::cin >> a;
    if(a == 1){
        std::cout << "anda memasukkan angka 1" << std::endl;
    }else{
        std::cout << "angka yang anda masukkan bukan angka 1" << std::endl;
    }
    return 0;
}
```
##### if, else , else if
contoh penggunaan:
```C++
#include <iostream>

int main() {
    int a;
    std::cin >> a;
    if(a == 1){
        std::cout << "anda memasukkan angka 1" << std::endl;
    }else if(a == 2){
        std::cout << "anda memasukkan angka 2" << std::endl;
    }else{
        std::cout << "angka yang anda masukkan bukan angka 1 atau 2" << std::endl;
    }
    return 0;
}
```
##### tambahan
jika hanya ada 2 kodisi anda bisa mempersingkatnya
contoh program:
```C++
#include <iostream>

int main() {
    int a;
    std::cin >> a;
    (a == 1)?std::cout << "angkanya 1" << std::endl : std::cout << "bukan 1" << std::endl;
    return 0;
}
```
### -> Perulangan atau Looping
##### while()
```C++
#include<iostream>
int main(){
    int i = 0;
    while(i < 5){
        std::cout << "hello rival team" << std::endl;
        i+=1;
    }
    return 0;
}
```
##### for()
```C++
#include<iostream>
int main(){
    for(int i=0; i<5; i++){
        std::cout << "hello rival team" << std::endl;
    }
    return 0;
}
```
##### Nested Loop
contoh penggunaan:
```C++
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout << "membuat matrix" << endl;
    cout << "masukkan baris:";
    cin >> m;
    cout << "masukkan colom:";
    cin >> n;
    int arr[m][n];
    cout << "\nmasukkan nilai array anda:" << endl;
    for(int i=0;i<m;i++){
        for(int k=0;k<n;k++){
            cin >> arr[i][k];
        }
    }
    cout << "ini adalah matrix yang anda buat:" << endl;
    for(int i=0;i<m;i++){
        for(int k=0;k<n;k++){
            cout <<  arr[i][k] << " ";
        }
        cout << endl;
    }
    return 0;
}
```
### -> Penggunaan Using namespace
Contoh penggunaannnya:
```C++
#include<iostream>
using namespace std;
int main(){
    cout << "hello rival team" << endl;
    return 0;
}
```
### -> Fungsi
Contoh penggunaannya:
#### Fungsi void
##### Menggunaan Parameter
```C++
#include<iostream>
using namespace std;
void display(int x,int y){
    //penjumlahan
    cout << x+y << endl; // = 10
    //pengurangan
    cout << x-y << endl; // = -2
    //pembagian
    cout << x/y << endl; // = 0
    //perkalian
    cout << x*y << endl; // = 24
    //modulo
    cout << x%y << endl; // = 4
}
int main(){
    int a = 4, b = 6;
    display(a,b);
    return 0;
}
```
##### Tidak Menggunakan Parameter
```C++
#include<iostream>
using namespace std;
void display(){
    int x = 4, y = 6;
    //penjumlahan
    cout << x+y << endl; // = 10
    //pengurangan
    cout << x-y << endl; // = -2
    //pembagian
    cout << x/y << endl; // = 0
    //perkalian
    cout << x*y << endl; // = 24
    //modulo
    cout << x%y << endl; // = 4
}
int main(){
    display();
    return 0;
}
```
#### Fungsi non void atau Memiliki Nilai Kembalian
Contoh Penggunaan:
##### Tanpa Parameter
```C++
#include<iostream>
using namespace std;
int dapatkannilai5(){
    return 5;
}
int main(){
    int hasil = dapatkannilai5();
    cout << hasil << endl;
    return 0;
}
```
##### Menggunakan Parameter
```C++
#include<iostream>
using namespace std;
int penjumlahan(int a,int b){
    return a + b;
}
int pengurangan(int a,int b){
    return a - b;
}
int perkalian(int a,int b){
    return a * b;
}
int main(){
    int x = 4, y = 6;
    int hasil_jumlah = penjumlahan(x,y);
    cout << hasil_jumlah << endl; // = 10
    int hasil_kurang = pengurangan(x,y);
    cout << hasil_kurang << endl; // = -2
    int hasil_kali = perkalian(x,y);
    cout << hasil_kali << endl; // = 24
    return 0;
}
```
### -> Pointer dan Reference
##### Pointer
contoh penggunaan:
```C++
#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int *ptr = &a;
    cout << *ptr << endl; // menampilkan nilai
    cout << ptr << endl; // menampilkan alamat memorinya

    return 0;
}
```
##### Reference
contoh penggunaan:
```C++
#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int &ref = a;
    cout << ref << endl; // menampilkan nilai
    cout << &ref << endl; // menampilkan alamat memorinya

    return 0;
}
```
### -> Variabel Lokal dan Global
##### Variabel Lokal
contoh penggunaan:
```C++
#include <iostream>
using namespace std;
void display(){
    cout << a << endl;
}
int main() {
    int a = 5;
    display();
    return 0;
}
```
##### Variabel Global
contoh penggunaan:
```C++
#include <iostream>
using namespace std;
int a = 5;
void display(){
    cout << a << endl;
}
int main() {
    display();
    return 0;
}
```
# つづく。。。
### ありがとう
