class Entry:
    def __init__(self,key,value):
        self.key=key
        self.value=value
        self.hash=hash(key)
class Hashmap:
    def __init__(self,cap=0):
        self.__size=0
        self.__cap=cap
        self.__data=[[] for i in range(cap)]
        
    def size(self):
        return self.__size
    
    def is_empty(self):
        return self.__size==0
    
    def resize(self):
        new_cap=self.__cap*2
        new_data=[[] for x in range(new_cap)]
        for i in range(self.__cap):
            for e in self.__data[i]:
                hv=hash(e.key)%new_cap
                entry=Entry(e.key,e.value)
                new_data[hv].append(entry)
        del self.__data
        self.__data=new_data
        self.__cap=new_cap

    def insert(self,key,value):
        if self.__size>=int(0.6*self.__cap):
            self.resize()
        e=Entry(key,value)
        hv=hash(e.key)%self.__cap
        self.__data[hv].append(e)
        self.__size+=1

    def search(self,key):
        hv=hash(key)%self.__cap
        return self.__data[hv]
        
    def remove(self,key):
        hv=hash(key)%self.__cap
        l=len(self.__data[hv])
        for i in range(l):
            if self.__data[hv][i].key==key:
                temp = self.__data[hv][l-1]
                self.__data[hv][l-1] = self.__data[hv][i]
                self.__data[hv][i]=temp
                self.__data[hv].pop()
        self.__size-=1










        

    




        
