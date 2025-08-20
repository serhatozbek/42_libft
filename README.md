## 🤖 libft | Ecole 42

Bu repo, 42 Okulları'nın müfredatının ilk ve en temel projesi olan libft'in kendi implementasyonumu içermektedir. Projenin amacı, standart C kütüphanesinin (<string.h>, <stdlib.h> vb.) sık kullanılan fonksiyonlarını sıfırdan yazarak, C dilinin temel mekaniklerine ve hafıza yönetimine derinlemesine hakim olmaktır.

Bu kütüphane, 42'deki daha karmaşık ve büyük projelerde kullanılacak güvenilir ve kişisel bir araç seti oluşturmanın ilk adımıdır. 🧰

---

#### 🎯 Projenin Amacı ve Kazanılan Yetkinlikler

libft projesi, bir yazılımcı olarak aşağıdaki temel yetkinlikleri kazanmamı ve pekiştirmemi sağladı:

🧠 **Derinlemesine C Bilgisi**: Pointer'lar, hafıza ayırma (malloc), adres aritmetiği ve veri tipleri üzerinde tam kontrol.

💾 **Hafıza Yönetimi**: malloc ile dinamik olarak yer ayırma ve free ile bu alanları güvenli bir şekilde serbest bırakma pratiği.

⚙️ **Algoritmik Düşünme**: String manipülasyonu ve arama için verimli algoritmalar geliştirme.

🛡️ **Hata Yönetimi (Error Handling)**: Fonksiyonların olası hata durumlarında programı güvende tutma.

🏗️ **Yazılım Mimarisi**: Yeniden kullanılabilir, modüler ve temiz kod yazma. Makefile kullanarak projenin derleme sürecini otomatikleştirme.

✅ **Disiplin ve Standartlar**: 42'nin Norminette kodlama standartlarına ve proje subjecti ile uyum.

---

#### 📦 Kütüphanenin İçeriği

Kütüphane, iki ana bölümden oluşmaktadır: C standart kütüphanesindeki fonksiyonların yeniden yazımı ve projelerde sıkça ihtiyaç duyulan ek yardımcı fonksiyonlar.

##### Bölüm 1: Libc Fonksiyonları

C standart kütüphanesinde (libc) bulunan temel fonksiyonların yeniden implementasyonu.


- ft_isalpha	Bir karakterin alfabetik olup olmadığını kontrol eder.
- ft_isdigit	Bir karakterin rakam olup olmadığını kontrol eder.
- ft_isalnum	Bir karakterin alfanümerik olup olmadığını kontrol eder.
- ft_isascii	Bir karakterin ASCII tablosunda olup olmadığını kontrol eder.
- ft_isprint	Bir karakterin yazdırılabilir olup olmadığını kontrol eder.
- ft_strlen	Bir string'in uzunluğunu hesaplar.
- ft_memset	Bir bellek bloğunu belirli bir karakterle doldurur.
- ft_bzero	Bir bellek bloğunu sıfırlar.
- ft_memcpy	Bir bellek bloğunu diğerine kopyalar.
- ft_memmove	Birbirinin üzerine binebilecek (overlapping) bellek bloklarını kopyalar.
- ft_strlcpy	Boyut korumalı olarak bir string'i kopyalar.
- ft_strlcat	Boyut korumalı olarak bir string'i diğerinin sonuna ekler.
- ft_toupper	Küçük harfi büyük harfe çevirir.
- ft_tolower	Büyük harfi küçük harfe çevirir.
- ft_strchr	Bir string içinde belirli bir karakterin ilk görüldüğü yeri bulur.
- ft_strrchr	Bir string içinde belirli bir karakterin son görüldüğü yeri bulur.
- ft_strncmp	İki string'i belirli bir boyuta kadar karşılaştırır.
- ft_memchr	Bir bellek bloğunda bir karakteri arar.
- ft_memcmp	İki bellek bloğunu karşılaştırır.
- ft_strnstr	Bir string içinde başka bir string'i belirli bir uzunlukta arar.
- ft_atoi	Bir string'i integer'a çevirir.
- ft_calloc	Belirli sayıda eleman için bellekten yer ayırır ve sıfırlar.
- ft_strdup	Bir string'in kopyasını oluşturmak için bellekten yer ayırır.


##### Bölüm 2: Ek Fonksiyonlar

libc'de bulunmayan fakat projelerde sıkça ihtiyaç duyulan yardımcı fonksiyonlar.


- ft_substr	Bir string'in belirli bir bölümünden yeni bir alt string oluşturur.
- ft_strjoin	İki string'i birleştirerek yeni bir string oluşturur.
- ft_strtrim	Bir string'in başındaki ve sonundaki belirli karakterleri temizler.
- ft_split	Bir string'i belirli bir ayraç karaktere göre kelimelere bölerek bir diziye atar.
- ft_itoa	Bir integer'ı string'e çevirir.
- ft_strmapi	Bir string'in her karakterine bir fonksiyon uygulayarak yeni bir string oluşturur.
- ft_striteri	Bir string'in her karakterine, indeksiyle birlikte bir fonksiyon uygular.
- ft_putchar_fd	Belirtilen dosya tanıtıcısına (file descriptor) bir karakter yazar.
- ft_putstr_fd	Belirtilen dosya tanıtıcısına bir string yazar
- ft_putendl_fd	Belirtilen dosya tanıtıcısına bir string ve ardından yeni satır karakteri yazar.
- ft_putnbr_fd	Belirtilen dosya tanıtıcısına bir integer yazar.


#### 🚀 Nasıl Kullanılır?

**1. Derleme 💻**

Projeyi klonladıktan sonra, ana dizinde make komutunu çalıştırarak libft.a adlı statik kütüphane dosyasını oluşturabilirsiniz.


```bash
# Projeyi klonlayın
git clone https://github.com/serhatozbek/42_libft.git

# Proje dizinine gidin
cd 42_libft

# Kütüphaneyi derleyin
make
#Makefile aşağıdaki kuralları içerir:

#make all veya make: Kütüphaneyi derleyip libft.a dosyasını oluşturur.

#make clean: Derleme sırasında oluşturulan nesne dosyalarını (.o) siler.

#make fclean: Nesne dosyalarını ve libft.a kütüphane dosyasını siler.

#make re: fclean ve ardından all komutlarını çalıştırarak kütüphaneyi yeniden oluşturur.
```

**2. Projeye Dahil Etme 🔗**

Kendi C projenizde libft kütüphanesini kullanmak için:

libft.a ve libft.h dosyalarını projenizin dizinine kopyalayın.

Kütüphaneyi kullanacağınız .c dosyasına #include "libft.h" satırını ekleyin.

Projenizi derlerken libft.a dosyasını bağlayın:

```Bash

# -I. : Header dosyasının mevcut dizinde olduğunu belirtir
# -L. : Kütüphane dosyasının mevcut dizinde olduğunu belirtir
# -lft : libft.a kütüphanesini bağlar
gcc -Wall -Wextra -Werror your_project_files.c -I. -L. -lft -o your_program
```

#### ⚠️ Sorumluluk Reddi

Bu repository'deki çözümler tamamen eğitim ve portföy amaçlıdır. 42'nin onur kuralları (honour code) gereği, Common Core sürecindeki öğrencilerin çözümleri kopyalaması kesinlikle yasaktır. Buradaki kodlar, repodaki projeyi tamamlamış biri olarak gelişimimi göstermek ve gelecekteki projelerim için bir referans noktası oluşturmak amacıyla paylaşılmıştır.

---