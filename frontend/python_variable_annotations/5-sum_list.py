#!/usr/bin/env python3
"""ex hol"""
from typing import List


def sum_list(input_list: List[float]) -> float:
    """sumlist func"""
    sum = 0
    for each in input_list:
        sum += each
    return sum
