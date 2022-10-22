#include <string>

class Resource {
    private:
        std::string name;
    public:
        Resource(std::string name): name(name) {};
        std::string GetName() { return name; }
};