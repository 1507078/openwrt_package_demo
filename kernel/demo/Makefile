include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/kernel.mk

PKG_NAME:=demo
PKG_RELEASE:=1

include $(INCLUDE_DIR)/package.mk

define KernelPackage/demo
  SUBMENU:=Other modules
  TITLE:=demo
  FILES:=$(PKG_BUILD_DIR)/demo.ko
  AUTOLOAD:=$(call AutoLoad,30,demo,1)
  KCONFIG:=
endef

define KernelPackage/demo/description
  Kernel module for demo.
endef

define Build/Compile
	$(KERNEL_MAKE) M="$(PKG_BUILD_DIR)" modules
endef

$(eval $(call KernelPackage,demo))
