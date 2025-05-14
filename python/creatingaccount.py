import time
import pickle
#ans='YES'
#while ans in 'YES':
dict4={}
dict5={}
dict2={'username':'name','accountno':5923,'aadhar':5923,'mobile':5923,'address':'address','credit':5923,'openingdate':'04','password':123}
try:
    fileaadhar=open('DATAFILE.dat','rb')
    dict3=pickle.load(fileaadhar)
    fileaadhar.close()
except:
    fileaadhar=open('DATAFILE.dat','wb')
    dict3={'first':00}
    dict3=pickle.dump(dict3,fileaadhar)
    fileaadhar.close()
    fileaadhar=open('DATAFILE.dat','rb')
    dict3=pickle.load(fileaadhar)
    fileaadhar.close()
name=input('ENTER ACCOUNT HOLDER NAME(WITHOUT USING DIGITS OR SPACE):  ')
while name.strip().isdigit():
    print("-----ENTER CORRECTLY-----")
    name=input('Re-ENTER ACCOUNT HOLDER NAME:  ')            
print()
accountno=input('ENTER ACCOUNT NUMBER OF ACCOUNT HOLDER(16 digits):  ')        
while (not(accountno.strip().isdigit()) or len(accountno.strip()) != 16)or(int(accountno.strip()) in dict3.values()):
    print('------INVALID ACCOUNT  NUMBER------')
    accountno=input('Re-ENTER ACCOUNT NUMBER OF ACCOUNT HOLDER(16 digits):  ')
print()
aadhar=input('ENTER AADHAR NUMBER OF ACCOUNT HOLDER(12 digits):  ')
while (not(aadhar.strip().isdigit()) or len(aadhar.strip()) != 12)or(int(aadhar.strip()) in dict3.values()):
    print('------INVALID AADHAR  NUMBER------')
    aadhar=input('Re-ENTER AADHAR NUMBER OF ACCOUNT HOLDER:  ')
print()
mobile=input('ENTER MOBILE NUMBER OF ACCOUNT HOLDER(10 digits):  ')    
while (not(mobile.strip().isdigit()) or len(mobile.strip()) != 10)or(int(mobile.strip()) in dict3.values()):
    print('------INVALID MOBILE  NUMBER------')
    mobile=input('Re-ENTER MOBILE NUMBER OF ACCOUNT HOLDER:  ')
print()
address=input('ENTER ADDRESS OF ACCOUNT HOLDER:  ')
print()
seconds = time.time()
local_time = time.ctime(seconds)
openingdate=local_time
credit=input('ENTER CREDIT ACCOUNT OF ACCOUNT HOLDER:  ')
credit=credit.strip()
while not(credit.isdigit()) or float(credit) < 0 :
    print('------INVALID CREDIT  NUMBER------')
    credit=input('Re-ENTER CREDIT ACCOUNT OF ACCOUNT HOLDER:  ')
    credit=credit.strip()
dict4[openingdate]='opening balance: '+str(credit)    
print()
password=input('ENTER YOUR PASSWORD(case sensitive):-')
filename=name+'.dat'
file1=open(filename,'wb')
dict2['username']=name
dict2['accountno']=accountno
dict2['aadhar']=int(aadhar)
dict2['mobile']=int(mobile)
dict2['address']=address
dict2['credit']=float(credit)
dict2['openingdate']=openingdate
dict2['password']=password
pickle.dump(dict2,file1)
pickle.dump(dict4,file1)
dict5={'loan status':0000000}
pickle.dump(dict5,file1)
file1.close()
fileaadhar=open('DATAFILE.dat','wb')
dict3[name+'aadhar']=int(aadhar)
dict3[name+'mobile']=int(mobile)
dict3[name+'accountno']=int(accountno)
pickle.dump(dict3,fileaadhar)
fileaadhar.close()
#print()
#ans=input('WANT CREATE ANOTHER ACCOUNT:  ')
#ans=ans.upper()
print('*'*50)
print()
import table
table.fx()