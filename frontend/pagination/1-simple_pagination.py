#!/usr/bin/env python3
"""ex hol"""
import csv
import math
from typing import Tuple, List


def index_range(page: int, page_size: int) -> Tuple[int, int]:
    """index range func"""
    return (((page - 1) * page_size), (page * page_size))


class Server:
    """Server class to paginate a database of popular baby names.
    """
    DATA_FILE = "Popular_Baby_Names.csv"

    def __init__(self):
        self.__dataset = None

    def dataset(self) -> List[List]:
        """Cached dataset
        """
        if self.__dataset is None:
            with open(self.DATA_FILE) as f:
                reader = csv.reader(f)
                dataset = [row for row in reader]
            self.__dataset = dataset[1:]

        return self.__dataset

    def get_page(self, page: int = 1, page_size: int = 10) -> List[List]:
        """get page func"""
        assert (isinstance(page, int) and isinstance(page_size, int))
        assert (page > 0) and (page_size > 0)
        tup = index_range(page, page_size)
        self.__dataset = self.dataset()
        return self.__dataset[tup[0]: tup[1]]
