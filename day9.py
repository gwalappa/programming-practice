is_failed = True
i=1
while is_failed and i<=20:
    if i%2!=0:
        i+=1
        continue
    print(f"try {i}")
    i+=1
    if i==9:
        continue
print("i gave up")
    
    