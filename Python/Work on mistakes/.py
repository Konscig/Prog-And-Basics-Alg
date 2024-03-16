def cipher(line):
    ind = line.index('.')
    line1 = line[:ind:]
    line2 = line[ind+1::]
    line = line1 + line2
    decoded_line = ''
    for i in line:
        i = chr(ord(i)+3)
        decoded_line += i
    return line.split('.')[0]+'.'+decoded_line
    
print(cipher("Look! A Caesar cipher.EfaabkQbuq"))