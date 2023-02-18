#!/usr/bin/env python
from glob import glob
import sys,os
PROJROOT=os.path.abspath(os.path.join(os.sep.join(sys.argv),"..",".."))
print("ROOT:",PROJROOT)
_incs=list(glob(os.path.abspath(os.path.join(PROJROOT,"include","*.*"))))
incs=[]
for i in range(len(_incs)):
    if(not ("title.h" in _incs[i] or "end.h" in _incs[i])):
        incs.append(_incs[i])
print(incs)

try:
    os.makedirs(os.path.abspath(os.path.join(PROJROOT,"build","include")))
except:
    pass
f=open(os.path.abspath(os.path.join(PROJROOT,"build","include","libplat.h")),"w")
r=open(os.path.abspath(os.path.join(PROJROOT,"include","title.h")))
f.write(r.read()+"\n")
r.close()

for i in incs:
    print(i)
    r=open(i)
    f.write(r.read())
    r.close()

r=open(os.path.abspath(os.path.join(PROJROOT,"include","end.h")))
f.write(r.read()+"\n")
r.close()
