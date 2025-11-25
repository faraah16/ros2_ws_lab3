from setuptools import find_packages
from setuptools import setup

setup(
    name='fleet_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('fleet_interfaces', 'fleet_interfaces.*')),
)
