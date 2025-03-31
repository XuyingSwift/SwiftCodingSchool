import requests

class Client(object):
    def __init__(self, url: str):
        self.url = url
    def get(self) -> str:
        return requests.get(self.url)._content

if __name__ == '__main__':
    client = Client('https://api.met.no/weatherapi/airqualityforecast/0.1/stations')
    print(client.get())