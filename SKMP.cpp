from copy import deepcopy
t=int(input())
for i in range(t):
    s1=input()
    s2=input()
    s1=list(s1)
    s2=list(s2)
    for j in s2:
        if j in s1:
          s1.remove(j)
    s1.sort()
    s=deepcopy(s1)
    s.append(s2[0])
    s=sorted(s,reverse=True)
    if s2[0] not in s1:
        print(''.join(s1[0:len(s)-s.index(s2[0])-1])+''.join(s2)+''.join(s1[len(s)-s.index(s2[0])-1:]))
    else:
        n=''.join(s1[0:s1.index(s2[0])])+''.join(s2)+''.join(s1[s1.index(s2[0]):])
        print(min(n,''.join(s1[0:len(s)-s.index(s2[0])-1])+''.join(s2)+''.join(s1[len(s)-s.index(s2[0])-1:])))
