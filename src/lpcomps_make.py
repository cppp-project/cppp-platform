#!/usr/bin/env python
f=open("lpcomps.h")
import sys
for i in range(10):
    f.readline()
defs=[]

class Has:
    zs=""
    name=""

while(1):
    zs=f.readline().strip()
    name=f.readline().strip().replace("#define ","").replace(" 0","").strip()
    if(zs=="" or name==""):
        break
    h=Has()
    h.zs=zs
    h.name=name
    defs.append(h)


for i in defs:
    print(i.zs,i.name,end="\n>")
    t=input().split(",")
    for j in range(len(t)):
        t[j]="defined("+t[j]+")"
    pd=" || ".join(t)
    print(pd)
    print("#elif "+pd,file=sys.stderr)
    print("#undef "+i.name,file=sys.stderr)
    print(i.zs,file=sys.stderr)
    print("#define "+i.name+" 1",file=sys.stderr)
f.close()
