A project to show basic autotools setup for compiling lua modules

## Building

  - `autoreconf -i`
  - `./configure`
  - `make`
  - `sudo make install`

## Running

  - `lua -e 'print(require"hello")'`
