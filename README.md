# Arduino Love Matrix Display

Sketch Arduino ini menggunakan library LedControl untuk menampilkan animasi hati pada matriks LED 8x8. Ini juga termasuk animasi wajah tersenyum. Animasi dipicu oleh tekanan tombol.

## Persyaratan

- Papan Arduino
- Matriks LED 8x8
- Library LedControl

## Koneksi Sirkuit

Hubungkan matriks LED ke papan Arduino:


| Fungsi                  | Pin Arduino | Koneksi Matriks LED 8x8 |
|-------------------------|-------------|-------------------------|
| Data In (DIN)           | 11          | DIN_PIN                 |
| Chip Select (CS)        | 10          | CS_PIN                  |
| Clock (CLK)             | 13          | CLK_PIN                 |
| Tombol (Up)             | 2           | pinTombolUp             |

## Instalasi

1. Instal library LedControl di Arduino IDE Anda.
2. Salin dan tempel kode yang diberikan ke Arduino IDE Anda.
3. Unggah kode ke papan Arduino Anda.

## Penggunaan

1. Hubungkan perangkat keras sesuai konfigurasi pin yang disebutkan.
2. Tekan tombol yang terhubung ke pin 2 untuk beralih antara animasi hati dan animasi wajah tersenyum.

## Detail Animasi

- Animasi hati terdiri dari tiga frame: Hati Kecil, Hati Sedang, dan Hati Besar.
- Animasi wajah tersenyum mencakup frame mata terbuka dan tertutup.

## Penyesuaian

Silakan modifikasi kode untuk membuat animasi Anda sendiri atau sesuaikan waktu.

## Troubleshooting

Jika Anda mengalami masalah, periksa kembali kabel dan pastikan library LedControl terinstal dengan benar.

Selamat coding!
