# CPU
* [General Information](#general-information)
* [Registers](#registers)
* [Status Register](#status-register)

## General Information
- 16-bit RAM addressing.
- 8-bit [registers](#registers).

## Registers
| Register | Size   | Usage                     |
| -------- | ------ | ------------------------- |
| PC       | 16-bit | Standard program counter. |
| ACC      | 8-bit  | Accumulator.              |
| IX, IY   | 8-bit  | Index registers.          |
| STAT     | 8-bit  | Status register.          |
| SP       | 8-bit  | Stack pointer.            |

## Status Register
| Bit | Usage       |
| --- | ----------- |
| 1   | Carry flag. |
| 2   | Zero flag.  |
