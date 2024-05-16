#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/hid.h>
#include<linux/input.h>
#include<linux/usb.h>
#include<linux/init.h>

#define Vendor_id 0x0c45
#define Product_id 0x760a

static struct usb_device_id usb_kb_id_able[] = {
    { USB_INTERFACE_INFO(USB_INTERFACE_CLASS_HID, USB_INTERFACE_SUBCLASS_BOOT, USB_INTERFACE_PROTOCOL_KEYBOARD) },
    {}
};
struct usb_kb{
    struct usb_device *usbdev;
    struct input_dev *input;
    
};