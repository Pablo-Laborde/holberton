#!/usr/bin/env python3
"""ex hol"""
from typing import Union, Tuple
un = Union[int, float]


def to_kv(k: str, v: un) -> Tuple[str, float]:
    """asd func"""
    return (k, v * v)
