
/**
 * using a additional stack to tracking the min element;
 * when push element,we push the element into the additional 
 * stack if the additional stack is empty or the top of the 
 * additional element is larger or equal to the element as well.
 * when pop the element if the top of the additional stack is
 * equal to the element , we pop the additional stack as well.
 * when we getMin of the stack , we return the top of the additional stack.
 * 
 */
 
template<class T>
class MinStack{
public:
    void push(const T& t){
        m_stk.push(t);
        if(m_minstk.empt()||m_minstk.top()>=t)
            m_minstk.push(t);
    }
    void pop(){
        if(!empty()){
            if(m_minstk.top()==m_stk.top())
                m_minstk.pop();
            m_stk.pop();
        }
    }
    bool empty() const{
        return m_stk.empty();
    }
    T top() const{
        if(empty())
            throw exception("empty stack");
        retun m_stk.top();
    }
    T Min() const{
        if(empty())
            throw exception("empty stack");
        return m_minstk.top();
    }
private:
    stack<int> m_stk;
    stack<int> m_minstk;
    
}
