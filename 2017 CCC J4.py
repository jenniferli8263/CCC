d = int(input())
times=[34]
hrs=1
mins=0
c = 0
while(hrs<12):
  mins+=1
  if mins == 60:
    hrs+=1
    mins=0
  if hrs>=12:
    break
  if mins<10:
    mins='0'+str(mins)
  else:
    mins=str(mins)
  
  if hrs>=10:
    hrs=str(hrs)
    if int(mins[1])-int(mins[0])==int(hrs[1])-int(hrs[0])==int(mins[0])-int(hrs[1]):
      mins=int(mins)
      hrs=int(hrs)
      times.append(hrs*60+mins)
  else:
    if int(mins[1])-int(mins[0])==int(mins[0])-hrs:
      mins=int(mins)
      hrs=int(hrs)
      times.append(hrs*60+mins)
  mins=int(mins)
  hrs=int(hrs)

if d>720:
  x=d%720
  for i in times:
    if x>=i:
      c+=1
  c=(d//720)*len(times) + c

else:
  for i in times:
    if d>=i:
      c+=1

print(c)

