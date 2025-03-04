import serial
import pyautogui

# Connect to Arduino (Update COM port if needed)
ser = serial.Serial('COM3', 9600)  

print("Listening for gestures...")

while True:
    if ser.in_waiting > 0:
        command = ser.readline().decode('utf-8').strip()
        print(f"Received: {command}")

        if command == "PLAY_PAUSE":
            pyautogui.press("space")  # Play/Pause media
        elif command == "VOLUME_UP":
            pyautogui.press("volumeup")  # Increase volume
        elif command == "VOLUME_DOWN":
            pyautogui.press("volumedown")  # Decrease volume

