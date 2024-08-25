# brightening name tag

- [Prerequisites](#prerequisites)
- [PCB](#pcb)
- [How to](#how-to)
  - [Prepare jtag2updi](#prepare-jtag2updi)
  - [Burn Bootloader](#burn-bootloader)
  - [Upload sketch](#upload-sketch)
- [Misc](#misc)
  - [LICENSE](#license)
  - [Contributors](#contributors)

## Prerequisites

- Arduino IDE (v.1.8.19)
  - [megaTinyCore](https://github.com/SpenceKonde/megaTinyCore) (v2.6.10)
- [jtag2updi](https://github.com/ElTangas/jtag2updi)

## PCB

![SCH_Schematic1_1-P1_2024-08-25](https://github.com/user-attachments/assets/e2432626-c408-4d6d-9b56-06262c8f4c2e)

![Screenshot 2024-08-25 at 12 12 15](https://github.com/user-attachments/assets/7093dd49-36e4-4bb0-a47c-a688f445dfa3)

![2D_PCB1_2024-08-25](https://github.com/user-attachments/assets/dee84ce6-e3a9-4871-b55b-4dde949af82f)
![3D_PCB1_2024-08-25](https://github.com/user-attachments/assets/11829f9e-8ebf-453f-aad3-fac0d9b3d0d9)

## How to

### Prepare jtag2updi

Prepare [jtag2updi](https://github.com/ElTangas/jtag2updi) to turn your Arduino into an ATtiny programmer.

![IMG_0771](https://github.com/user-attachments/assets/2b7644ed-9006-4c38-b190-80bc0969d141)

### Burn Bootloader

This board uses the ATtiny202.

- An internal clock of `1MHz` was set to reduce power consumption.
- The BOD(Brown Out Detection) was set to `1.8V` to suit the use of button batteries.

![Screenshot 2024-08-25 at 10 54 43](https://github.com/user-attachments/assets/d22fe298-a91c-4769-a22a-cedd675c8775)

### Upload sketch

Select `Upload Using Programmer` from the Arduino IDE to upload a sketch.

![Screenshot 2024-08-25 at 12 03 48](https://github.com/user-attachments/assets/44a3878a-33c9-4143-95ca-86bf82bec1b4)

## Misc

### LICENSE

See [LICENSE.md](./LICENSE.md).

### Contributors

- [shin-sforzando](https://github.com/shin-sforzando)
