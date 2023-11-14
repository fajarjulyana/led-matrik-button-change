 #include <LedControl.h> //Library LedControl 
 // Atur pin sesuai dengan koneksi display matrix 8x8 
 const int DIN_PIN = 11; 
 const int CS_PIN = 10; 
 const int CLK_PIN = 13; 
  
  // Pin untuk tombol
const int pinTombolUp = 2;

 // Inisialisasi objek LedControl 
 LedControl lc = LedControl(DIN_PIN, CLK_PIN, CS_PIN, 1); 
  
 // Gambar Hati Besar 
 byte CintaDetakBesar[8] = { 
   B00001110, 
   B00011111, 
   B00111111, 
   B01111110, 
   B01111110, 
   B00111111, 
   B00011111, 
   B00001110 
 }; 
  
 // Data Gambar Hati Kecil 
 byte CintaDetakKecil[8] = { 
     B00000000, 
     B00001110, 
     B00011110, 
     B00111100, 
     B00111100, 
     B00011110, 
     B00001110, 
     B00000000, 
 }; 
  
 // Data Gambar Hati Sangat Kecil 
 byte CintaDetakSangatKecil[8] = { 
     B00000000, 
     B00000000, 
     B00001100, 
     B00011000, 
     B00011000, 
     B00001100, 
     B00000000, 
     B00000000, 
 }; 
 byte SenyumMataBuka[8] = { 
     B00000000, 
     B00100110, 
     B01000110, 
     B01000000, 
     B01000000, 
     B01000110, 
     B00100110, 
     B00000000, 
 };  
 byte SenyumMataTutup[8] = { 
     B00000000, 
     B00100100, 
     B01000100, 
     B01000000, 
     B01000000, 
     B01000100, 
     B00100100, 
     B00000000, 
 };  
 // Membuat Animasi Hati 
 void Hati(){ 
   // Tampilkan Hati Sangat Kecil 
   for (int row = 0; row < 8; row++) { 
     lc.setRow(0, row, CintaDetakSangatKecil[row]); 
   } 
  
   delay(200);  // Jeda 0.2 detik 
  // Tampilkan Hati Kecil 
   for (int row = 0; row < 8; row++) { 
     lc.setRow(0, row, CintaDetakKecil[row]); 
   } 
   delay(150); // Jeda 0.15 detik
   // Tampilkan Hati Besar
   for (int row = 0; row < 8; row++) { 
     lc.setRow(0, row, CintaDetakBesar[row]); 
   } 
   delay(150); // Jeda 0.15 detik 
 } 

 // Membuat Animasi Hati 
 void HatiJalan(){ 
   // Tampilkan Hati Sangat Kecil 
   for (int row = 0; row < 8; row++) { 
     lc.setRow(0, row, SenyumMataTutup[row]); 
     
   } 
  
   delay(200);
 //  lc.clearDisplay(0);
   delay(200);// Jeda 0.2 detik 
  // Tampilkan Hati Kecil 
   for (int row = 0; row < 8; row++) { 
     lc.setRow(0, row, SenyumMataBuka[row]); 
   } 
   delay(150); // Jeda 0.15 detik
 } 
  void setup() { 
   lc.shutdown(0, false);  // Aktifkan chip 
   lc.setIntensity(0, 0); // Atur intensitas cahaya matriks (0-15) 
   lc.clearDisplay(0);    // Hapus tampilan matriks 

   // Set pin tombol sebagai input
  pinMode(pinTombolUp, INPUT_PULLUP);
 } 
 void loop() { 
 
   if (digitalRead(pinTombolUp) == LOW) {
    // Tombol Up ditekan
      Hati();
    } else {
      HatiJalan();
    }
   
  
   delay(250); // jeda 0.25 detik 
 }
  
