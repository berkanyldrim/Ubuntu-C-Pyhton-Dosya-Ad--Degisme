kaynakDosya=input("okunacak dosya adı: ") #girdi al
hedefDosya=input("hedef dosya adı   : ") #

# girilen adda kaynak dosya var mı
try:
    kaynaktanOku=open(kaynakDosya,"r")
except FileNotFoundError:
    print("öyle bir dosya adlı dosya bulunamadı")
    exit()
#girilen isimde dosya var mı yok mu
try:
    hedefeYaz=open(hedefDosya,"x")
except FileExistsError:
    print(" dosya zaten var...")
    exit()

# kaynak dosyadaki datayı okur
for veri in kaynaktanOku:
    hedefeYaz.write(veri)



hedefeYaz.close()
print("işlem başarılı")
