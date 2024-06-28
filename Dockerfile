FROM ubuntu:22.04

RUN apt update
RUN apt install -y build-essential \
                   cmake \
                   python3 \
                   python3-pip
RUN mkdir /host
WORKDIR /host
CMD ["/bin/bash"]






