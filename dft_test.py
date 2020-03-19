import cv2 as cv
import ctypes
from ctypes import *
import json
import struct
from struct import *
import base64
import numpy as np
from numpy import *
import time
import torch.utils.data

#import torch


# 导入人脸识别接口
ll = ctypes.cdll.LoadLibrary
dftTest = ll('/*/*/libdfttest.so')

def dft_test():
    dft_test = dftTest.dft_test
    dft_test.argtypes = []
    dft_test()

if __name__ == '__main__':
    dft_test()