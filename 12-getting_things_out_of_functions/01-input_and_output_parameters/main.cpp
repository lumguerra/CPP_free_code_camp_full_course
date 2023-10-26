    #include <iostream>
    #include <string>
    using namespace std;

    // void bigger_str(const string input1, const string input2, string &output)
    // {
    //     if (input1.length() > input2.length()){
    //     output = input1;
    // } else {
    //     output = input2;
    // }
    // }
    void max_num(const int input1, const int input2, int *output)
    {
        if (input1 < input2)
        *output = input2;
        else
        *output = input1;      
    }

    int main()
    {
        // string biggest_line{};
        // string line1{"My name is Lsadfgasdfasdfasdfasdfasucas"};
        // string line2{"My wifes name is Sarah"};

        // bigger_str(line1, line2, biggest_line);
        int int1 {344};
        int int2 {54};
        int max {};
        max_num(int1, int2, &max);

        cout << max;

        return 0;
    
    }