#pragma once

#include <cstddef>
#include <vector>

struct Container{
    double available_space = 0;
    size_t height = 0;
    Container * left = nullptr;
    Container * right = nullptr;
    Container():available_space(1), height(1) {}
    Container(double weight);
    bool push(double weight);
};

class Tree{
public:
    size_t size = 0;
    ~Tree();
private:
    Container * head = nullptr;
    static size_t get_height(Container * node);
    static int get_balance_factor(Container * node);
    static void restore_height(Container * node);
    static Container * left_rotation(Container * node);
    static Container * right_rotation(Container * node);
    static Container * balance(Container * node);
    static void delete_tree(Container * node);
    static Container * find_min(Container * node);
    static Container * remove_min(Container * node);
    Container * standart_insert(double item, Container * node);
    Container * remove(double weight, Container * node);
    // task specific
public:
    void insert(double weight);
private:
    Container * insert(double weight, Container * container);
    Container * find_place(double weight, Container * container);
};