template<typename T>
class Stack{
public:
    T stk;
    int top;
private:
    void push(T v){
        this->stk[top++] = v;
    }
    void pop(){
        this->top--;
    }
    void GetTop(){
        return top;
    }
};