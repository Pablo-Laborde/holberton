#!/usr/bin/env python3
"""ex hol"""
from typing import Union, List
un = Union[int, float]


def sum_mixed_list(mxd_lst: List[un]) -> float:
    """sml func"""
    sum = 0
    for each in mxd_lst:
        sum += each
    return sum
