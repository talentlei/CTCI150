struct box{
explicit box(int w, int h, int l, int id)
: width(w), height(h), length(l), index(id) {}
int width;
int height;
int length;
int index;
bool operator<(const box& o) const{
return width < o.width and height < o.height and length < o.length;
}
void to_string(){
printf("%d: %d, %d, %d\n", index, width, height, length);
}
};
