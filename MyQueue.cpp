#include <iostream>
#include<vector>
using namespace std;
class mysort{
public:
    virtual void sort()=0;
    virtual void print()=0;
};
class bubble_sort:public mysort{
private:
    int*array=new int[100];
    int size;
public:
    bubble_sort(int*arr,int sz){
        array=arr;
        size=sz;
    }
    void sort(){
        for(int i=size-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(array[j]>array[j+1]){
                    int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<"\n";
    }
};
class select_sort:public mysort{
private:
    int*array=new int[100];
    int size;
public:
    select_sort(int*arr,int sz){
        array=arr;
        size=sz;
    }
    void sort(){
        for(int i=0;i<size-1;i++){
            int min=array[i];
            int index=i;
            for(int j=i;j<size;j++){
                if(array[j]<min){
                    min=array[j];
                    index=j;
                }
            }
            array[index]=array[i];
            array[i]=min;
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<"\n";
    }
};
class insert_sort:public mysort{
private:
    int*array=new int[100];
    int size;
public:
    insert_sort(int*arr,int sz){
        array=arr;
        size=sz;
    }
    void sort(){
        for(int i=1;i<size;i++){
            for(int j=0;j<i;j++){
                if(array[i]<array[j]){
                    int temp=array[i];
                    for(int k=i;k>j;k--){
                        array[k]=array[k-1];
                    }
                    array[j]=temp;
                    break;
                }
            }
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<"\n";
    }
};
class shell_sort:public mysort{
private:
    int*array=new int[100];
    int size;
public:
    shell_sort(int*arr,int sz){
        array=arr;
        size=sz;
    }
    void sort(){
        for(int gap=size/2;gap>=1;gap=gap/2){
            for(int i=0;i<gap;i++){
                for(int j=i+gap;j<size;j+=gap){
                    for(int k=i;k<j;k+=gap){
                        if(array[j]<array[k]){
                            int temp=array[j];
                            for(int ii=j;ii>k;ii-=gap){
                                array[ii]=array[ii-gap];
                            }
                            array[k]=temp;
                        }
                    }
                }
            }
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<array[i]<<" ";
        }
        cout<<"\n";
    }
};

//ººÅµËş
static int times=0;
void move(int n,char a,char b,char c){
    if(n==0){
        return ;
    }else{
        move(n-1,a,c,b);
        cout<<a<<"->"<<c<<endl;
        times++;
        move(n-1,b,a,c);
    }
    return;
}
int main(){
    move(400,'A','B','C');
    cout<<times;
}