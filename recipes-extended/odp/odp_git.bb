require odp.inc

inherit autotools-brokensep

PACKAGE_ARCH = "${MACHINE_ARCH}"

DEPENDS = "openssl"
DEPENDS_append_ls1043ardb = " usdpaa-apps fmlib libxml2"
DEPENDS_append_t1040d4rdb-64b = " usdpaa-apps fmlib libxml2"

RDEPENDS_${PN} = "bash libcrypto"
RDEPENDS_${PN}_append_ls2080ardb = " libssl odp-module"

ODP_SOC ?= ""
ODP_SOC_ls1043ardb = "LS1043"
ODP_SOC_t1040d4rdb-64b = "T1040"

ODP_PLATFORM ?= "linux-dpaa1"
ODP_PLATFORM_ls2080ardb = "linux-dpaa2"

EXTRA_OECONF = "--with-platform=${ODP_PLATFORM} \
                --with-sdk-install-path=${STAGING_DIR_TARGET} \
"
EXTRA_OECONF_append_ls1043ardb = " --disable-shared"
EXTRA_OECONF_append_ls2080ardb = " --enable-build-type=ls2080"
EXTRA_OECONF_append_t1040d4rdb-64b = " --disable-shared"

EXTRA_OEMAKE_ls2080ardb = "CROSS_COMPILE="${TARGET_PREFIX}" \
                           SYSROOT="${STAGING_DIR_TARGET}" \
"

PACKAGECONFIG[perf] = "--enable-test-perf,,,"

do_configure_prepend () {
    export SOC=${ODP_SOC}
    ${S}/bootstrap
}

do_compile_prepend () {
    export SOC=${ODP_SOC}
    export ARCH=${TUNE_ARCH}
}

FILES_${PN}-staticdev += "${datadir}/opendataplane/*.la"

COMPATIBLE_MACHINE = "(ls1043ardb|ls2080ardb|t1040d4rdb-64b)"
