#!/usr/bin/python3
""" comment """

from sys import argv
from model_state import Base, State

from sqlalchemy import create_engine
from sqlalchemy.orm import Session
from sqlalchemy import select


if __name__ == "__main__":
    su = f"mysql+mysqldb://{argv[1]}:{argv[2]}@localhost:3306/{argv[3]}"
    engine = create_engine(su, pool_pre_ping=True)
    Base.metadata.create_all(engine)
    with Session(engine) as encon:
        query = select(State).where(State.name
                                    == f'{argv[4]}').order_by(State.id)
        result = encon.execute(query).fetchone()
    if result is not None:
        print(f"{result[0].id}")
    else:
        print("Not found")
