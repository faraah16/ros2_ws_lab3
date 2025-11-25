from setuptools import find_packages
from setuptools import setup

setup(
    name='simple_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('simple_interfaces', 'simple_interfaces.*')),
)
