SRC_URI = "${LINUX_TARBALL_URI}"
SRC_URI[sha256sum] = "${LINUX_SHA256}"
S = "${WORKDIR}/linux-${PV}"