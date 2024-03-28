import qrcode


data = input("Wprowadź dane do wygenerowania kodu QR: ")


qr = qrcode.QRCode(
    version=1,
    error_correction=qrcode.constants.ERROR_CORRECT_H,
    box_size=10,
    border=4,
)


qr.add_data(data)
qr.make(fit=True)


img = qr.make_image(fill='black', back_color='white')


img.save("C:/Users/preda/Desktop/amatorskie proggramy/qrcode.png")

print("Kod QR został wygenerowany i zapisany jako qrcode.png")