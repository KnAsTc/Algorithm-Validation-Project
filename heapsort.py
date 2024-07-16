count=0

def swap(data,i,j):
    tmp=data[i]
    data[i]=data[j]
    data[j]=tmp

def heapfy(data,root,length):
    
    maxnode=-1
    l=root*2+1  #left node
    r=root*2+2#right node
    if(l<length and data[l]>data[root] ):
        maxnode=l
    else :maxnode=root
    if(r<length and data[r]>data[maxnode] ):
        maxnode=r
    if (maxnode!=root):
        globals()["count"]=globals()["count"]+1
        swap(data,maxnode,root)
        heapfy(data,maxnode,length)
    
def heapsort(data):
    div=int(len(data)/2)
    for i in range(div-1,-1,-1):
        heapfy(data,i,len(data))
    
    print("HEAP initial:",data,"COUNT",globals()["count"])
    for j in range(len(data)-1,-1,-1):
        globals()["count"]=globals()["count"]+1
        swap(data,0,j)
        heapfy(data,0,j)

data=[35,21,37,15,52,15,5,40]
heapsort(data)

print("RESULT",data)

print(count)