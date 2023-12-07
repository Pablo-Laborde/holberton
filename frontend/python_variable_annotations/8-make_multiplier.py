#!/usr/bin/env python3
"""ex hol"""
from typing import Callable


def make_multiplier(multiplier: float) -> Callable[[float], float]:
    """sadsa func"""
    def func(k1: float) -> float:
        """asdasdf func"""
        return k1 * multiplier
    return func
