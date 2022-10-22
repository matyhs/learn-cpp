template <class T>
class Accum {
    private:
        T total;
    public:
        Accum(T total): total(total) {};
        T operator+=(T const& value) { return total = total + value; }
        T GetTotal() const { return total; }
};

template <>
class Accum<Person> {
    private:
        int total;
    public:
        Accum(int total): total(total) {};
        int operator+=(Person const& value) { return total = total + value.GetAge(); }
        int GetTotal() const { return total; }
};