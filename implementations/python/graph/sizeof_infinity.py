import sys
import struct

def show_size_n_bits(el):
    infinity = el
    print(sys.getsizeof(infinity))
    packed_infinity = struct.pack("d", infinity)
    unpacked_integer = struct.unpack("Q", packed_infinity)[0]
    print(bin(unpacked_integer))

show_size_n_bits(float('inf'))
show_size_n_bits(1.0)
show_size_n_bits(2.0)
show_size_n_bits(4.0)
show_size_n_bits(10.0)