SUMMARY = "Open Data Plane Interface Implementation"
DESCRIPTION = "OpenDataPlane (ODP) provides a data plane application programming \
        environment that is easy to use, high performance, and portable between networking SoCs."
HOMEPAGE = "http://www.opendataplane.org"
SECTION = "console/network"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=4ccfa994aa96974cfcd39a59faee20a2"

SRC_URI = " \
git://sw-stash.freescale.net/scm/gitam/odp.git;branch=rel_v1.4.1;protocol=http \
git://sw-stash.freescale.net/scm/dpaa2/qbman_userspace.git;protocol=http;name=qbman;destsuffix=git/platform/linux-dpaa2/flib/qbman \
git://sw-stash.freescale.net/scm/sdk/flib.git;branch=sdk-v2.0.x;protocol=http;name=rta;destsuffix=git/platform/linux-dpaa2/flib/rta \
"
SRCREV = "d4aa40c3a03460024d02e260dbf9c8a48ed55f51"
SRCREV_qbman = "929b89a68905a94a4629f3226f9799d0c97b6c8a"
SRCREV_rta = "bbab28b03ae21c52ce913f8b052acf53bd24ff5d"

S = "${WORKDIR}/git"
