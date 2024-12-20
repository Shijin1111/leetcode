F= "23GF"
dic={}
# '1':1,'2':2,'3':3,'4':4,'5':5,'6':6,'7':7,'8':8,'9':9,
for i in range(10):
    dic[str(i)]=i
    
dic.update({'A':10,'B':11,'C':12,'D':13,'E':14,'F':15,'G':16})
print(dic)
k=3
val=0
for i in F:
    val+=dic[i]*pow(17,k)
    k-=1
print(val)
    
    

