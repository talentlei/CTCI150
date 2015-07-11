//Describe how you could use a single array to implement three stacks

/*
  Answer:  we can divide the array into three part with the same element.
          for each part, we design a stack.

*/
class MutiStack{
public:
  explicit MutiStack(int n=3, int capacity);
private:
  vector<int> top;
  vector<int> tail;
}
