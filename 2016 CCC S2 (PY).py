q = int(input())
n = int(input())
dmoj = input().split()
dmoj = list(map(int, dmoj))
peg = input().split()
peg = list(map(int, peg))
dmoj.sort()
peg.sort()
ans = 0
for i in range(n):
  if q == 1:
    ans+=max(dmoj[i],peg[i])
if q == 2:
  peg.reverse()
  for i in range(n):
    ans+=max(dmoj[i],peg[i])
print(ans)