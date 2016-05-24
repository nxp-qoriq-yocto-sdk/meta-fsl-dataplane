FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_qoriq-arm64 = " \
    file://0001-Revert-fsl_dpio-Fix-DPIO-polling-thread-logic.patch \
    file://0002-Revert-dpio-driver-Fix-qman-portal-interrupt-masking.patch \
    file://0003-Revert-dpio-polling-if-IRQ-not-available.patch \
    file://0004-vfio-fsl-mc-Temporary-Extend-VFIO-API-to-pass-guest-.patch \
    file://0005-iommu-arm-smmu-implement-virtual-SMMU-interface-for-.patch \
    file://0006-Porting-changes-for-vSMMU-for-4.1-Kernel.patch \
    file://0007-kvm-qman-portal-Hack-to-map-qman-portal-cacheable-re.patch \
    file://0008-KVM-arm-Increase-the-Memslots-and-expose-to-usespace.patch \
    file://0009-vfio-fsl-mc-Allign-device-region-size.patch \
    file://0010-Modify-the-VSID-to-the-actual-stream-ID-for-FSL-MC.patch \
    file://0011-kvm-arm32-Dummy-defination-of-PAGE_S2_NS-for-compila.patch \
    file://0012-tmp-Do-not-try-to-configure-the-S1-context-bank-tran.patch \
    file://0013-fsl-mc-remane-fsl_mc_interrupts_supported.patch \
    file://0014-fsl-mc-bus-Add-line-interrupt-support-for-KVM.patch \
    file://0015-fsl-mc-bus-Using-root-dprc-contsiner-for-checking-in.patch \
"
