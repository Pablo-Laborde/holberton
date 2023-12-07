#!/usr/bin/env python3
"""ex hol"""
from typing import Tuple


def index_range(page: int, page_size: int) -> Tuple[int, int]:
    """index range func"""
    return (((page - 1) * page_size), (page * page_size))
