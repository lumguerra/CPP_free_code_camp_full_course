#include <iostream>

class Printer
{
    std::string name{"none"};
    int paper_count{0};

    public:
        Printer(std::string n, int p) : name(n), paper_count(p)
        {
            std::cout << "printer " << name << " created\n";
        }

        void print(std::string txtDoc)
        {
            int required_paper = txtDoc.length() / 10;

            paper_count -= required_paper;

            if(required_paper < paper_count)
            {
                std::cout << "Text printed. There are " << paper_count << " papers left\n";        
            }else
            {
                throw __MCF_runtime_failure;
            }          
        }
};

int main()
{
    Printer printer1("HP deskjet 5050", 10);

    try{
        printer1.print("Lorem ipsum doloren");
        printer1.print("Lorem ipsum doloren");
        printer1.print("Lorem ipsum doloren");
        printer1.print("Lorem ipsum doloren");
        printer1.print("Lorem ipsum doloren Lorem ipsum doloren Lorem ipsum doloren Lorem ipsum doloren Lorem ipsum doloren Lorem ipsum doloren Lorem ipsum doloren  Lorem ipsum doloren");
    } 
    catch(const char* error_txt)
    {
        std::cout << "Error: " << error_txt;
    }
    catch(int e)
    {
        std::cout << "Error: " << e;
    }
    catch(...)
    {
        std::cout << "General error";
    }


    return 0;
}