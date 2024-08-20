import serial

# Bluetooth port (COM3 is an example; adjust to your device)
bluetooth_port = 'COM3'
baud_rate = 115200

# Start the serial connection
ser = serial.Serial(bluetooth_port, baud_rate)

while True:
    data = ser.readline().decode('utf-8').strip()
    print("Received data: ", data)
