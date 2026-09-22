# Digispark ATtiny85 BadUSB Toolkit

## 📌 Definition
The Digispark is an ATtiny85-based micro-controller development board featuring a built-in USB interface. It functions as a USB-HID (Human Interface Device) to emulate a keyboard and execute automated keystrokes payloads.

## 🎯 Objective
We are setting up, troubleshooting, and programming the Digispark ATtiny85 to bypass hardware detection issues on modern Windows 11 systems and successfully inject automated keystrokes.

---

## 💻 Software Required
- **Arduino IDE:** (Version 1.8.x or 2.x) for compiling and flashing scripts.
- **Digistump Drivers Installer:** Official driver package for ATtiny85/Micronucleus bootloader.

## 🔗 Driver Download Links
- **Digistump Drivers:** [Download official drivers package](https://github.com/digistump/DigistumpArduino/releases/download/1.1.0/Digistump.Drivers.zip)

## 📂 Extracted File Location
- Extract the downloaded driver zip package to: 
  `C:\Users\YourUsername\Documents\Arduino\hardware\digistump` or keep it in a dedicated project workspace folder for easy access.

---

## 🔍 Checking Device Manager & Drivers
To verify if your system recognizes the Digispark during its short bootloader window:
1. Press `Windows + R`, type `devmgmt.msc`, and hit Enter to open **Device Manager**.
2. Keep the Device Manager window open and plug the Digispark into the USB port.
3. Look for a device named **"Digispark Bootloader"** or **"libusb-win32 devices"** appearing for roughly 5 seconds.

## ⚠️ Problem Name
- **Issue:** `USB 3.0+ Port Incompatibility / 5-Second Bootloader Window Timeout`
- **Description:** Modern Windows 11 laptops use high-speed USB 3.0/3.1+ ports that fail to catch the quick polling window of the Digispark's software-based V-USB bootloader, resulting in "Device Descriptor Request Failed" or driver installation failures.

---

## 🚨 Important Warnings & Precautions
* **Avoid Direct USB 3.0 Ports:** Never plug the Digispark directly into high-speed blue USB 3.0 ports for initial driver setup if possible; use a USB 2.0 hub or an older system.
* **Respect the Timing Window:** Only plug the board into the USB port *after* clicking "Upload" in the Arduino IDE when prompted by the console.
* **Payload Safety:** Do not execute payload scripts on critical personal or work machines to prevent accidental system modifications.

---

## 🚀 Installing Process (Step-by-Step)
1. **Install Drivers:** Run the `DPInst.exe` file extracted from the Digistump driver package as Administrator.
2. **Configure Arduino IDE:**
   - Go to **File > Preferences** and add the Digispark board URL to Additional Boards Manager URLs.
   - Open **Tools > Board > Boards Manager**, search for `Digistump AVR Boards`, and click **Install**.
3. **Select Board:** Choose **Digispark (Default - 16.5mhz)** from **Tools > Board**.
4. **Upload Code:** 
   - Paste your payload script into Arduino IDE.
   - Click **Upload**.
   - When the console says `Plug in device now...`, insert the Digispark into the USB port.
   - Wait for the upload-complete confirmation message.
