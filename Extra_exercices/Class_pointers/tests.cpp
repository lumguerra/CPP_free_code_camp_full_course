#include <iostream>
#include <vector>

class Shapes
{
    public:
        virtual void draw() const = 0;
};

class Circle : public Shapes
{
    public:
        void draw() const override
        {
            std::cout << "drawing Circle\n";
        }
};

class Square : public Shapes
{
    public:
        void draw() const override
        {
            std::cout << "drawing Square\n";
        }
};

class Triangle : public Shapes
{
    public:
        void draw() const override
        {
            std::cout << "drawing Triangle\n";
        }
};

int main(){
        
Circle circle1;
Triangle triangle1;
Square square1;

std::vector<Shapes*> p_shapes_vec;
Circle* p_circle = &circle1;
Triangle* p_trianlge = &triangle1;
Square* p_square = &square1;
p_shapes_vec.push_back(p_circle);
p_shapes_vec.push_back(p_trianlge);
p_shapes_vec.push_back(p_square);

for(Shapes* i : p_shapes_vec)
{
    i->draw();
}

return 0;

}


