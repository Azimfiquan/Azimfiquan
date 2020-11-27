#ifndef PART3_H
#define PART3_H

class Recipe{
    private:
        struct rec{
            int bil;
            std::string items;
            double price;

            rec *next;
        };

        rec *head;
        rec *cur;
        rec *tmp;

    public:
        Recipe();
        void addNode(int addBil, std::string addItems, double addPrice);
        double total();
        void print();
};


#endif
