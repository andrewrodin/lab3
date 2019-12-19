#ifndef MYSTACK_H
#define MYSTACK_H

#include <vector>

template <class T>
class MyStack
{
public:

    MyStack() // конструктор
    {}

    bool empty()
    {
        return m_vec.empty(); // если размер нашего стека равен 0, то он пуст
    }

    size_t size()
    {
        return m_vec.size(); // возвращает количество элементов нашего стека
    }

    T top()
    {
        if (m_vec.empty())
        {
            // проверяем на пустоту, так как не имеем право обращаться к верхнему элементу при пустом стеке
            throw -1; // генерируем исключение типа int
        }

        // если с пустотой проблем нет, просто возвращаем верхний элемент
        return m_vec.back();
    }

    void push(const T& item)
    {
        m_vec.push_back(item); // добавляем в стек новый элемент
    }

    void pop()
    {
        if (m_vec.empty())
        {
            // проверяем на пустоту, нельзя снимать из пустого стека
            throw -1; // генерируем исключение типа int
        }

        // если с пустотой проблем нет, просто снимаем верхний элемент
        m_vec.pop_back();
    }

private:

    std::vector<T> m_vec;
};

#endif // MYSTACK_H
