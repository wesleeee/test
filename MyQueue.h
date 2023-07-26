//
// Created by 褚子源 on 2023/3/7.
//

#ifndef UNTITLED_MYQUEUE_H
#define UNTITLED_MYQUEUE_H
// MyStack.h
#include<iostream>

// MyQueue.h
#include<iostream>

class MyQueue {
private:
    struct Node{
        char content;
        struct Node*next;
    }*top,*tail;
    // TODO:
    // 你可以用任何数据结构实现“队列”
    // 我们鼓励你使用MyStack类：请思考，如何维护两个栈结构，以满足队列结构的要求？
    // 我们帮你引用了头文件“MyStack100.h”，这份头文件中含有MyStack类的满分实现，你可以放心使用
    // 你也可以用其他方式实现队列，比如数组或链表。
public:
    MyQueue();  // 构造函数
    // 我们对MyQueue的析构函数没有做具体要求，你可以按需自行定义实现。
    void push(char c); // 元素从队尾入队
    char pop();        // 队首元素出队，返回出队的元素（我们没有定义空队列pop操作，测试用例中不会涉及）
    int size();        // 返回队列的大小

    // 请注意，以上函数的函数体请你在MyQueue.cpp中实现！
};
#endif //UNTITLED_MYQUEUE_H
