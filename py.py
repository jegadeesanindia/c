from operator import itemgetter
n=int(input())
li=[]
for i in range(n):
    li.append(input())
li1=[]
for i in range(n):
    li1.append(li[i].split())
key=input().split()
if(key[2]=="lexicographic"):
    key[0]=int(key[0])-1
    if(key[1]=="true"):
        key[1]=True
    else:
        key[1]=False
    #for i in range(n-1):
        '''if(li1[i][key[0]]>li1[i+1][key[0]]):
            temp=li1[i][key[0]]
            li1[i][key[0]]=li1[i+1][key[0]]
            li1[i+1][key[0]]=temp'''
    li1.sort(key=itemgetter(key[0]))
        #print(li1[i])
    if(key[1]==True):
        for i in range(n-1,-1,-1):
            for j in range(len(li1[i])):
                print(li1[i][j],end=" ")
            print(end="\n")
    if(key[1]==False):
        #print("hi")
        for i in range(n):
            for j in range(len(li1[i])):
                print(li1[i][j],end=" ")
            print(end="\n")
if(key[2]=="numeric"):
    key[0]=int(key[0])-1
    if(key[1]=="true"):
        key[1]=True
    else:
        key[1]=False
    for i in range(n):
        li1[i].insert(len(li1[i]),int(li1[i][key[0]]))
        #li1[i][key[0]]=int(li1[i][key[0]])
        #print(li1)
    #for i in range(n-1):
    li1.sort(key=itemgetter(len(li1[i])-1))
    for i in range(n):
        #li1[i].insert(key[0],(li1[i][len(li1[i])-1]))
        del li1[i][len(li1[i])-1]
    if(key[1]==True):
        for i in range(n-1,-1,-1):
            for j in range(len(li1[i])):
                print(li1[i][j],end=" ")
            print(end="\n")
    if(key[1]==False):
         for i in range(n):
            for j in range(len(li1[i])):
                    print(li1[i][j],end=" ")
            print(end="\n")
