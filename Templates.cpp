/*why use templates ??
Ans : Because 
1. it follows DRY(Do Not Repeat Yourself) Principal
2. and we can use it to do Generic Programming.

#Syntax
template <class T>  // T can be int, char, float etc..
class vector{                       |
    T *arr;                         |
    public:                         |
        vector(T *ar){              |=> represents many classes       
            // code                 |    
        }                           |    
    // And many other methods       |        
}

int main(){
    vector<int>myVec(ptr);
    vector<float>myfVec(ptr1);
}
*/
