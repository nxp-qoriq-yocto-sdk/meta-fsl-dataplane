SUMMARY = "Open Data Plane Interface Implementation"
DESCRIPTION = "OpenDataPlane (ODP) provides a data plane application programming \
        environment that is easy to use, high performance, and portable between networking SoCs."
HOMEPAGE = "http://www.opendataplane.org"
SECTION = "console/network"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4ccfa994aa96974cfcd39a59faee20a2"

SRC_URI = " \
git://sw-stash.freescale.net/scm/gitam/odp.git;branch=devel_1.4.1;protocol=http \
git://sw-stash.freescale.net/scm/dpaa2/qbman_userspace.git;protocol=http;name=qbman;destsuffix=git/platform/linux-dpaa2/flib/qbman \
git://sw-stash.freescale.net/scm/sdk/flib.git;branch=sdk-v2.0.x;protocol=http;name=rta;destsuffix=git/platform/linux-dpaa2/flib/rta \
"
SRCREV = "8a426506fa0cdfb817fba9e0d64e7a98edddd4f1"
SRCREV_qbman = "fd259b34441c891d356a15c283dfd13e5e6eba6b"
SRCREV_rta = "bbab28b03ae21c52ce913f8b052acf53bd24ff5d"

S = "${WORKDIR}/git"
