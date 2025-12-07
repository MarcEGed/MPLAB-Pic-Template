This template was created to make it simpler to compile C files to .hex for the pic, by pressing CTRL+SHIFt+B inside of VSCode.
The resulting hex will be inside of the build folder.

Notes:
In the code, the _XTAL_FREQ constant must be matching with the oscillator inside of proteus.

If you want to change the pic um, make sure to change the mcpu argument inside of tasks.json