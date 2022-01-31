class Solution{
public:
    int height(int N){
        for(int i=0;i<=100000;i++){
            int ch=(i*(i+1))/2;
            if(ch>N)
            return i-1;
        }
    }
};