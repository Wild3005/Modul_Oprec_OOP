#ifndef OPERASI_HPP
#define OPERASI_HPP
class Operasi {
public:
    Operasi(int x = 0, int y = 0) : a(x), b(y) {}

    // Fungsi virtual murni untuk override di kelas turunan
    virtual int hitung() = 0;

protected:
    int a, b;
};

class Penjumlahan : public Operasi {
public:
    Penjumlahan(int x, int y) : Operasi(x, y) {}
    int hitung() override {
        return a + b;
    }
};

class Pengurangan : public Operasi {
public:
    Pengurangan(int x, int y) : Operasi(x, y) {}
    int hitung() override {
        return a - b;
    }
};

class Perkalian : public Operasi {
public:
    Perkalian(int x, int y) : Operasi(x, y) {}
    int hitung() override {
        return a * b;
    }
};

class Pembagian : public Operasi {
public:
    Pembagian(int x, int y) : Operasi(x, y) {}
    int hitung() override {
        if (b != 0)
            return a / b;
        else
            return 0; // Menghindari pembagian dengan nol
    }
};

class Modulo : public Operasi {
public:
    Modulo(int x, int y) : Operasi(x, y) {}
    int hitung() override {
        if (b != 0)
            return a % b;
        else
            return 0; // Menghindari modulo dengan nol
    }
};
#endif