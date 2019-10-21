 #pragma once

 class Mylongint{
 private:
     long int value;
 public:
    Mylongint();
    ~Mylongint();
    Mylongint(const long int &new_value);
    void set_value(const long int &new_value);
    long int get_value() const;

    friend std::ostream& operator << (std::ostream &out, const Mylongint  &Mylongint);
    friend std::istream& operator >>(std::istream  &in, Mylongint &Mylongint);

    friend Mylongint  operator + (const Mylongint &lhs , const Mylongint &rhs);

    Mylongint &operator = (const Mylongint &rhs);

    friend  Mylongint operator - (const  Mylongint &lhs , const  Mylongint &rhs);

    friend  Mylongint operator * (const  Mylongint &lhs , const  Mylongint &rhs);


    friend  Mylongint operator / (const  Mylongint &lhs , const  Mylongint &rhs);
    friend Mylongint operator % (const Mylongint &lhs, const Mylongint &rhs);

    Mylongint  operator += (const  Mylongint &rhs);
    Mylongint operator -= (const  Mylongint &rhs);

    friend bool operator == (const Mylongint &lhs ,const Mylongint &rhs);
    friend bool operator != (const Mylongint &lhs ,const Mylongint &rhs);
    friend bool operator > (const Mylongint &lhs ,const Mylongint &rhs);
    friend bool operator < (const Mylongint &lhs ,const Mylongint &rhs);
};


Mylongint :: Mylongint(): value(0){
}


Mylongint :: Mylongint(const long int &new_value): value(new_value){
}

Mylongint :: ~Mylongint(){
}



long int Mylongint::get_value() const {
    return value;
}

void Mylongint ::set_value(const long int &new_value){
    value = new_value;
}

std::istream  & operator >>(std::istream  &in, Mylongint &Mylongint)
{
    in >> Mylongint.value;
    return in;
}

std::ostream& operator << (std::ostream &out, const Mylongint  &Mylongint)
{
    out  << Mylongint.value << "\n";
    return out;
}


Mylongint &Mylongint::operator = (const Mylongint &rhs){
    if (this == &rhs) {
        return *this;
    }
    value = rhs.value;
    return *this;
}

Mylongint operator + (const Mylongint &lhs ,const Mylongint &rhs){
    return Mylongint(lhs.value + rhs.value);
}

Mylongint operator - (const Mylongint &lhs , const Mylongint &rhs){
    return Mylongint(lhs.value - rhs.value);
}

Mylongint operator * (const Mylongint &lhs , const Mylongint &rhs){
    return Mylongint (lhs.value * rhs.value);
}

Mylongint operator / (const Mylongint &lhs , const Mylongint &rhs){
    return Mylongint(lhs.value /rhs.value);
}

Mylongint Mylongint::operator += (const Mylongint &rhs){
    return *this = *this + rhs;
}

Mylongint Mylongint::operator -= (const Mylongint &rhs){
    return *this = *this - rhs;
}

bool operator == (const Mylongint &lhs,const Mylongint &rhs){
    bool result = false;
    if ((lhs.value == rhs.value))
        result = true;
    return result;
}

bool operator != (const Mylongint &lhs, const Mylongint &rhs){
    return !(lhs == rhs);
}

bool operator > (const Mylongint &lhs,const Mylongint &rhs){
    bool result = false;
    if (lhs.value > rhs.value)
        result = true;
    return result;
}

bool operator < (const Mylongint &lhs,const Mylongint &rhs){
    bool result = false;
    if (lhs.value < rhs.value)
        result = true;
    return result;
}

Mylongint operator % (const Mylongint &lhs , const Mylongint &rhs){
    return Mylongint(lhs.value % rhs.value);
}
