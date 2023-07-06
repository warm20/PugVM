template<typename T>
class Stack{
private:
    T stk;
    int top;
public:
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