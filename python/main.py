import os
class Indexer:
    def __init__(self, directory) -> None:
        self.directory = directory

class SPIMIIndexer(Indexer):
    def __init__(self, directory) -> None:
        super().__init__(directory)

    def index(self, token_stream):
        with open(os.path.join(self.directory, "index"))